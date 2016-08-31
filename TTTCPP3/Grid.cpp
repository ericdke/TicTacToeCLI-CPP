//
//  Grid.cpp
//  TTTCPP3
//
//  Created by ERIC DEJONCKHEERE on 31/08/2016.
//  Copyright © 2016 AYA.io. All rights reserved.
//

#include "Grid.hpp"

void Grid::update_index(int index, Player *p)
{
    played.push_back(index);
    slots[index].p = p;
}

std::string Grid::description()
{
    std::stringstream ss;
    for(std::vector<Slot> iv : SplitVector(slots, 3))
    {
        for (Slot &sl : iv)
        {
            ss << sl.description() + " ";
        }
        ss << "\n";
    }
    return ss.str();
}
