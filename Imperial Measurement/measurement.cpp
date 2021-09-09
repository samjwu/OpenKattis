#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main() {
    std::vector<int> conversion = {1, 1000, 12, 3, 22, 10, 8, 3};
    std::unordered_map<std::string, int> idx = {
        {"thou", 0}, {"th", 0},
        {"inch", 1}, {"in", 1},
        {"foot", 2}, {"ft", 2},
        {"yard", 3}, {"yd", 3},
        {"chain", 4}, {"ch", 4},
        {"furlong", 5}, {"fur", 5},
        {"mile", 6}, {"mi", 6},
        {"league", 7}, {"lea", 7}
    };

    double v;
    std::string u, u2;
    std::cin >> v >> u >> u2 >> u2;

    int idx1 = idx[u], idx2 = idx[u2];
    while (idx1 < idx2) {
        v /= conversion[idx1 + 1];
        idx1++;
    }
    while (idx1 > idx2) {
        v *= conversion[idx1];
        idx1--;
    }

    std::cout.precision(12);
    std::cout << v;
}