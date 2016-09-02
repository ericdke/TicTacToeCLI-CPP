//
//  Manager.hpp
//  TTTCPP3
//
//  Created by ERIC DEJONCKHEERE on 31/08/2016.
//  Copyright © 2016 AYA.io. All rights reserved.
//

#ifndef Manager_hpp
#define Manager_hpp

#include "Player.hpp"
#include "Grid.hpp"

class Manager
{
    Player p1;
    Player p2;
    Player *cp = &p1;
    Grid g;
public:
    Manager() : p1(Player("X", "John")), p2(Player("O", "Jane")) {};
    Manager(Player *a, Player *b) : p1(*a), p2(*b) {};
    // set
    void update_indices(int idx);
    void swap_player();
    void set_current_player(Player &p);
    // get
    Player* const player_1();
    Player* const player_2();
    Player* const current_player();
    Grid* const get_grid();
};

#endif /* Manager_hpp */
