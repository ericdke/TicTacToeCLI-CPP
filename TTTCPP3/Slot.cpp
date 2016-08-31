//
//  Slot.cpp
//  TTTCPP3
//
//  Created by ERIC DEJONCKHEERE on 31/08/2016.
//  Copyright © 2016 AYA.io. All rights reserved.
//

#include "Slot.hpp"

std::string Slot::description()
{
    if(p == nullptr)
        return "?";
    return p->mark;
}
