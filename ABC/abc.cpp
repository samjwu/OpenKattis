#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

int main() {
    int a, b, c, n;
    std::vector<int> v;    
    char order[4];
    
    for (int i=0; i<3; i++) {
        std::cin >> n;
        v.push_back(n);
    }
    std::cin >> order;

    a = *std::min_element(v.begin(), v.end());
    c = *std::max_element(v.begin(), v.end());
    for (int i=0; i<3; i++) {
        if (v[i] != a && v[i] != c) {
            b = v[i];
        }
    }

    for (int i=0; i<3; i++) {
        if (order[i] == 'A') {
            std::cout << a << ' ';
        } else if (order[i] == 'B') {
            std::cout << b << ' ';
        } else {
            std::cout << c << ' ';
        }
    }
}