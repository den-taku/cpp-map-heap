#ifndef LIB_HPP_
#define LIB_HPP_

#include <vector>
#include <map>

namespace solution {
    typedef struct Solution {
        std::vector<int> elements;
    } Solution;

    // bool Solution::operator

    class Container {
        public:
            // 昇順に持つ
            std::map<double, Solution> map;

            // O(log n)
            bool emplace(const Solution& solution);
            // O(|T|) where T := {S | p(S) < threshold}
            int erase_if_less_than(const double &threshold);
    };
}

#endif // LIB_HPP_