#include <algorithm>
#include <iostream>

int main() {
    int n, a, b, start = -1, end = 1001;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> a >> b;
        start = std::max(start, a);
        end = std::min(end, b);
    }

    if (start <= end) {
        std::cout << "gunilla has a point";
    } else {
        std::cout << "edward is right";
    }
}