#include "lib.hpp"
using namespace solution;


bool Container::emplace(const Solution& solution) {
    double p_value = 0.0;
    for (const auto e: solution.elements) {
        p_value += (double)e;
    }
    // コンテナサイズに対し対数時間
    // https://cpprefjp.github.io/reference/map/map/emplace.html
    auto ret = this->map.emplace(p_value, solution);
    return ret.second;
}


int Container::erase_if_less_than(const double &threshold) {
    int number = 0;
    auto itr = this->map.begin();
    while ((*itr).first < threshold) {
        itr = this->map.erase(itr);
        number++;
    }
    return number;
}
