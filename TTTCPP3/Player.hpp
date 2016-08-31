//
//  Player.hpp
//  TTTCPP3
//
//  Created by ERIC DEJONCKHEERE on 31/08/2016.
//  Copyright © 2016 AYA.io. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <string>
#include <vector>
#include <iostream>

class Player
{
public:
    Player(std::string m, std::string n) : mark(m), name(n) {};
    std::string mark;
    std::string name;
    std::vector<int> indices;
};

#endif /* Player_hpp */
