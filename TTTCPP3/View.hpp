//
//  View.hpp
//  TTTCPP3
//
//  Created by ERIC DEJONCKHEERE on 31/08/2016.
//  Copyright © 2016 AYA.io. All rights reserved.
//

#ifndef View_hpp
#define View_hpp

#include "Grid.hpp"

class View
{
public:
    View(){};
    void const announce(Player *p1, Player *p2);
    void const player_plays(Player *pl);
    void const show_grid(Grid *g);
    void const no_winner();
    void const winner_is(Player *pl);
};

#endif /* View_hpp */
