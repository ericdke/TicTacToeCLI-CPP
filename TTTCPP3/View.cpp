//
//  View.cpp
//  TTTCPP3
//
//  Created by ERIC DEJONCKHEERE on 31/08/2016.
//  Copyright © 2016 AYA.io. All rights reserved.
//

#include "View.hpp"

void View::announce(Player *p1, Player *p2)
{
    std::cout << p1->name + " has symbol " + p1->mark << std::endl;
    std::cout << p2->name + " has symbol " + p2->mark << std::endl;
}

void View::player_plays(Player *pl)
{
    std::cout << pl->name + " plays:\n" << std::endl;
}

void View::show_grid(Grid *g)
{
    std::cout << g->description() << std::endl;
}

void View::no_winner()
{
    std::cout << "No winner. They're both too dumb." << std::endl;
}

void View::winner_is(Player *pl)
{
    std::cout << pl->name + " is the winner!" << std::endl;
}
