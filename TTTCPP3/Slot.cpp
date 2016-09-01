//
//  Slot.cpp
//  TTTCPP3
//
//  Created by ERIC DEJONCKHEERE on 31/08/2016.
//  Copyright © 2016 AYA.io. All rights reserved.
//

#include "Slot.hpp"
#include "Colors.h"
#include <unistd.h>

std::string Slot::description()
{
    if(p == nullptr)
    {
        if(isatty(1))
        {
            return FMAG("-");
        }
        else
        {
            return "-";
        }
    }
    else
    {
        if(isatty(1))
        {
            if(p->mark == "X")
                return FBLU("X");
            return FGRN("O");
        }
        else
        {
            return p->mark;
        }
    }
}
