//
//  Manager.cpp
//  TTTCPP3
//
//  Created by ERIC DEJONCKHEERE on 31/08/2016.
//  Copyright © 2016 AYA.io. All rights reserved.
//

#include "Manager.hpp"

void Manager::swap_player()
{
    if(current_player == nullptr)
    {
        current_player = &p1;
    }
    else
    {
        if(current_player == &p1) {
            current_player = &p2;
        }
        else
        {
            current_player = &p1;
        }
    }
}

void Manager::update_indices(int idx)
{
    grid.update_index(idx, current_player);
    current_player->indices.push_back(idx);
}

std::vector<std::vector<int>> Manager::combination(int length, std::vector<int> arr)
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
