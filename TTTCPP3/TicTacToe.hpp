//
//  TicTacToe.hpp
//  TTTCPP3
//
//  Created by ERIC DEJONCKHEERE on 31/08/2016.
//  Copyright © 2016 AYA.io. All rights reserved.
//

#ifndef TicTacToe_hpp
#define TicTacToe_hpp

#include "Manager.hpp"
#include "View.hpp"
#include <random>
#include <ctime>
#include <algorithm>

class TicTacToe
{
    Manager manager;
    View view;
    std::vector<std::vector<int>> const winning_sequences = {
        // Horizontal
        {0,1,2},
        {3,4,5},
        {6,7,8},
        // Diagonal
        {0,4,8},
        {2,4,6},
        // Vertical
        {0,3,6},
        {1,4,7},
        {2,5,8}
    };
    int random_in_range(int start, int end);
    int random_index();
    bool played_contains(int index);
    void check_winner();
    std::vector<std::vector<int>> combination(int length, std::vector<int> arr);
public:
    void play();
};


#endif /* TicTacToe_hpp */
