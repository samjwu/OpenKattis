#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    int p;
    std::vector<int> v;

    for (int i=0; i<n; i++) {
        std::cin >> p;
        v.push_back(p);
    }

    std::sort(v.begin(), v.end(), std::greater<int>());

    long long discount = 0;
    for (int i=0; i<n; i++) {
        if (i % 3 == 2) {
            discount += v[i];
        }
    }

    std::cout << discount;
}