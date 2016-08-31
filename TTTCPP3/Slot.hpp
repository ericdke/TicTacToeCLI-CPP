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

class Slot
{
public:
    Slot(int i, Player *pl) : index(i), p(pl) {};
    Slot(int i) : index(i), p(nullptr) {};
//    ~Slot()
//    {
//        std::cout << "SLOT " << index << " DESTROYED!!!" << std::endl;
//    }
    int index;
    Player *p;
    std::string description();
};

#endif /* Slot_hpp */
