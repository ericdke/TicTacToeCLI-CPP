//
//  TicTacToe.cpp
//  TTTCPP3
//
//  Created by ERIC DEJONCKHEERE on 31/08/2016.
//  Copyright © 2016 AYA.io. All rights reserved.
//

#include "TicTacToe.hpp"

void TicTacToe::play()
{
    view.announce(manager.player_1(), manager.player_2());
    for (int i = 0; i < 9; i++)
    {
        view.player_plays(manager.current_player());
        int idx = random_index();
        manager.update_indices(idx);
        view.show_grid(manager.get_grid());
        check_winner();
        manager.swap_player();
    }
    view.no_winner();
}

std::vector<std::vector<int>> TicTacToe::combination(int length, std::vector<int> arr)
{
    if (length < 0 || length > arr.size()) {
        return std::vector<std::vector<int>>();
    }
    std::vector<int> indexes;
    for (int idx = 0; idx < length; idx++) {
        indexes.push_back(idx);
    }
    std::vector<std::vector<int>> combinations;
    auto offset = arr.size() - indexes.size();
    while (true) {
        std::vector<int> combination;
        for(int idx : indexes)
        {
            combination.push_back(arr[idx]);
        }
        combinations.push_back(combination);
        auto i = indexes.size() - 1;
        while ((int)i >= 0 && indexes[i] == i + offset) {
            i--;
        }
        if ((int)i < 0) {
            break;
        }
        i++;
        int start = indexes[i - 1] + 1;
        for (int j = (int)i - 1; j < indexes.size(); j++) {
            indexes[j] = start + j - (int)i + 1;
        }
    }
    return combinations;
}

void TicTacToe::check_winner()
{
    std::vector<std::vector<int>> cb = combination(3, manager.current_player()->indices);
    for(std::vector<int> &v : cb)
    {
        sort(v.begin(), v.end());
        for(std::vector<int> ws : winning_sequences)
        {
            if(v == ws)
            {
                view.winner_is(manager.current_player());
                exit(0);
            }
        }
    }
}

int TicTacToe::random_in_range(int start, int end)
{
    // should we cache this, is this costly?
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(start, end);
    return dis(gen);
}

int TicTacToe::random_index()
{
    int index = random_in_range(0, 8);
    while (played_contains(index))
        index = random_in_range(0, 8);
    return index;
}

bool TicTacToe::played_contains(int index)
{
    for(int p : manager.get_grid()->played)
        if(p == index)
            return true;
    return false;
}
