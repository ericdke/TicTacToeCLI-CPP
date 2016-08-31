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
public:
    Manager() : p1(Player("X", "John")), p2(Player("O", "Jane")) {};
    Manager(Player *a, Player *b) : p1(*a), p2(*b) {};
    ~Manager()
    {
        std::cout << "MANAGER DESTROYED!!!" << std::endl;
    }
    Player p1;
    Player p2;
    Grid grid;
    Player *current_player = &p1;
    void swap_player();
    std::vector<std::vector<int>> combination(int length, std::vector<int> arr);
    void check_permutations(std::vector<int> indices);
};

#endif /* Manager_hpp */
