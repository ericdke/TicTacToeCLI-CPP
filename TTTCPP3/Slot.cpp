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

std::string const Slot::description()
{
    if(!is_term)
    {
        if(p == nullptr)
            return "-";
        return p->get_mark();
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
            if(p->get_mark() == "X")
                // and/or use something else than this macro so we can pass variables
                return FBLU("X");
            return FGRN("O");
        }
    }
}

void Slot::set_player(Player *player)
{
    p = player;
}



