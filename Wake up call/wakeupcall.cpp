#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int s, a = 0, b = 0;

    for (int i = 0; i < n; ++i) {
        std::cin >> s;
        a += s;
    }

    for (int i = 0; i < m; ++i) {
        std::cin >> s;
        b += s;
    }

    if (a > b) {
        std::cout << "Button 1" << std::endl;
    } else if (a < b) {
        std::cout << "Button 2" << std::endl;
    } else {
        std::cout << "Oh no" << std::endl;
    }

    return 0;
}
