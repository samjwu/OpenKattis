#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n, x;
    std::vector<int> v;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> x;
        v.push_back(x);
    }

    std::sort(v.begin(), v.end());

    for (int i = n/3; i < n*2/3; i++) {
        std::cout << v[i] << ' ';
    }
    for (int i = 0; i < n/3; i++) {
        std::cout << v[i] << ' ';
    }
    for (int i = n*2/3; i < n; i++) {
        std::cout << v[i] << ' ';
    }
}
