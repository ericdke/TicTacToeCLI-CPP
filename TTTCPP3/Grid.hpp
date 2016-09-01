//
//  Grid.hpp
//  TTTCPP3
//
//  Created by ERIC DEJONCKHEERE on 31/08/2016.
//  Copyright © 2016 AYA.io. All rights reserved.
//

#ifndef Grid_hpp
#define Grid_hpp

#include "Slot.hpp"
#include <sstream>

class Grid
{
    template<typename T>
    std::vector<std::vector<T>> SplitVector(const std::vector<T>& vec, size_t n)
    {
        std::vector<std::vector<T>> outVec;
        size_t length = vec.size() / n;
        size_t remain = vec.size() % n;
        size_t begin = 0;
        size_t end = 0;
        for (size_t i = 0; i < std::min(n, vec.size()); ++i)
        {
            end += (remain > 0) ? (length + !!(remain--)) : length;
            outVec.push_back(std::vector<T>(vec.begin() + begin, vec.begin() + end));
            begin = end;
        }
        return outVec;
    }
    bool get_term();
public:
    std::vector<Slot> slots;
    Grid()
    {
        bool t = get_term();
        slots.reserve(9);
        for (int i = 0; i < 9; i++) {
            slots.push_back(Slot(i, t));
        }
    }
    std::vector<int> played;
    std::string description();
    void update_index(int index, Player *p);
};

#endif /* Grid_hpp */
