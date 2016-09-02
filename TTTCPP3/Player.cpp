//
//  Player.cpp
//  TTTCPP3
//
//  Created by ERIC DEJONCKHEERE on 31/08/2016.
//  Copyright © 2016 AYA.io. All rights reserved.
//

#include "Player.hpp"

std::string const Player::get_mark()
{
    return mark;
}

std::string const Player::get_name()
{
    return name;
}

void Player::update_indices(int index)
{
    indices.push_back(index);
}

std::vector<int>* const Player::get_indices()
{
    return &indices;
}
