#include <algorithm>
#include <climits>
#include <iostream>

int main() {
    int n, age, low = INT_MAX;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> age;
        low = std::min(low, age);
    }

    std::cout << low;
}
