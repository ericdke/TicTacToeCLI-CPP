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
    if(!is_term)
    {
        if(p == nullptr)
        {
            return "-";
        }
        else
        {
            return p->mark;
        }
    }
    else
    {
        if(p == nullptr)
        {
            return FMAG("-");
        }
        else
        {
            // TODO: use enum or struct instead
            if(p->mark == "X")
                // and/or use something else than this macro so we can pass variables
                return FBLU("X");
            return FGRN("O");
        }
    }
}




