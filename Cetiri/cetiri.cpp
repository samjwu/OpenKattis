#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n;
    std::vector<int> v;

    for (int i=0; i<3; i++) {
        std::cin >> n;
        v.push_back(n);
    }

    std::sort(v.begin(), v.end());

    int d1 = v[1] - v[0];
    int d2 = v[2] - v[1];

    if (d1 == d2) {
        std::cout << v[2] + d1;
    } else if (d1 > d2) {
        std::cout << v[0] + d2;
    } else {
        std::cout << v[1] + d1;
    }
}