#include "../lib/lib.hpp"
#include <iostream>
#include <set>
using namespace std;
using namespace solution;

int main() {
    auto container = Container();
    auto sol1 = Solution { vector<int>(3, 2) };
    auto sol2 = Solution { vector<int>(3, 3) };
    auto sol3 = Solution { vector<int>(3, 4) };
    auto sol4 = Solution { vector<int>(3, 5) };
    auto sol5 = Solution { vector<int>(3, 6) };
    auto sol6 = Solution { vector<int>(3, 7) };
    auto sol7 = Solution { vector<int>(3, 8) };
    auto sol8 = Solution { vector<int>(3, 9) };
    container.emplace(sol2);
    container.emplace(sol4);
    container.emplace(sol1);
    container.emplace(sol5);
    container.emplace(sol8);
    container.emplace(sol3);
    container.emplace(sol6);
    container.emplace(sol7);

    for (const auto &e: container.map) {
        cout << e.first << endl;
    }

    // auto itr = container.map.begin();
    // while ((*itr).first < 18) {
    //     itr = container.map.erase(itr);
    // }

    cout << "Remove " << container.erase_if_less_than(18.0) << endl;
    for (const auto &e : container.map) {
        cout << e.first << endl;
    }
}