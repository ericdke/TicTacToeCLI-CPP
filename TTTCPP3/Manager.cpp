//
//  Manager.cpp
//  TTTCPP3
//
//  Created by ERIC DEJONCKHEERE on 31/08/2016.
//  Copyright © 2016 AYA.io. All rights reserved.
//

#include "Manager.hpp"

Player* const Manager::current_player()
{
    return cp;
}

void Manager::set_current_player(Player &p)
{
    cp = &p;
}

Player* const Manager::player_1()
{
    return &p1;
}

Player* const Manager::player_2()
{
    return &p2;
}

Grid* const Manager::get_grid()
{
    return &g;
}

void Manager::swap_player()
{
    if(cp == nullptr)
    {
        cp = &p1;
    }
    else
    {
        if(cp == &p1) {
            cp = &p2;
        }
        else
        {
            cp = &p1;
        }
    }
}

void Manager::update_indices(int idx)
{
    g.update_index(idx, cp);
    cp->indices.push_back(idx);
}


