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
    ~View()
    {
        std::cout << "VIEW DESTROYED!!!" << std::endl;
    }
    void announce(Player *p1, Player *p2);
    void player_plays(Player *pl);
    void show_grid(Grid *g);
    void no_winner();
    void winner_is(Player *pl);
};

#endif /* View_hpp */
