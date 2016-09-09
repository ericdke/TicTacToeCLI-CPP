//
//  View.cpp
//  TTTCPP3
//
//  Created by ERIC DEJONCKHEERE on 31/08/2016.
//  Copyright © 2016 AYA.io. All rights reserved.
//

#include "View.hpp"

void const View::announce(Player *p1, Player *p2)
{
    std::cout << p1->get_name() + " has symbol " + p1->get_mark() << std::endl;
    std::cout << p2->get_name() + " has symbol " + p2->get_mark() + "\n" << std::endl;
}

void const View::player_plays(Player *pl)
{
    std::cout << pl->get_name() + " plays:\n" << std::endl;
}

void const View::show_grid(Grid *g)
{
    std::cout << g->description() << std::endl;
}

void const View::no_winner()
{
    std::cout << "No winner. They're both too dumb.\n" << std::endl;
}

void const View::winner_is(Player *pl)
{
    std::cout << pl->get_name() + " is the winner!\n" << std::endl;
}
