#include <iomanip>
#include <iostream>
#include <map>
#include <set>

int main() {
    int n, a;
    std::set<int> seen;
    std::map<int, double> prob = {
        {2,  1.0 / 36},
        {3,  2.0 / 36},
        {4,  3.0 / 36},
        {5,  4.0 / 36},
        {6,  5.0 / 36},
        {7,  6.0 / 36},
        {8,  5.0 / 36},
        {9,  4.0 / 36},
        {10, 3.0 / 36},
        {11, 2.0 / 36},
        {12, 1.0 / 36}
    };
    double ans = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> a;
        if (a >= 1 && a <= 12 && seen.find(a) == seen.end()) {
            ans += prob[a];
        }
        seen.insert(a);
    }

    std::cout << std::fixed << std::setprecision(5) << ans;
}
