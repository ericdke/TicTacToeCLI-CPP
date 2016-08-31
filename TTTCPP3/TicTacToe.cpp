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
    view.announce(&manager.p1, &manager.p2);
    for (int i = 0; i < 9; i++)
    {
        view.player_plays(manager.current_player);
        int idx = random_index();
        manager.update_indices(idx);
        view.show_grid(&manager.grid);
        check_winner();
        manager.swap_player();
    }
    view.no_winner();
}

void TicTacToe::check_winner()
{
    std::vector<std::vector<int>> cb = manager.combination(3, manager.current_player->indices);
    for(std::vector<int> &v : cb)
    {
        sort(v.begin(), v.end());
        for(std::vector<int> ws : winning_sequences)
        {
            if(v == ws)
            {
                view.winner_is(manager.current_player);
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
    for(int p : manager.grid.played)
        if(p == index)
            return true;
    return false;
}
