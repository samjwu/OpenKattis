#include <iostream>

int main() {
    int n, g, b, count = 0;
    bool failed = false;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> g >> b;
        count += g;

        if (b > count) {
            failed = true;
            break;
        }
    }

    if (failed) {
        std::cout << "impossible";
    } else {
        std::cout << "possible";
    }
}
