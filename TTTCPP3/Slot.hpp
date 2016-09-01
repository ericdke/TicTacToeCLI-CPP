//
//  Slot.hpp
//  TTTCPP3
//
//  Created by ERIC DEJONCKHEERE on 31/08/2016.
//  Copyright © 2016 AYA.io. All rights reserved.
//

#ifndef Slot_hpp
#define Slot_hpp

#include "Player.hpp"
#include <stdlib.h>

class Slot
{
public:
    bool is_term;
    Slot(int i, Player *pl, bool t) : index(i), p(pl), is_term(t) {};
    Slot(int i, bool t) : index(i), p(nullptr), is_term(t) {};
    int index;
    Player *p;
    std::string description();
};

#endif /* Slot_hpp */
