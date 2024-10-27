#include <iostream>

int main() {
    int n, w, total = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> w;
        total += w;
    }

    if (total % 3 == 0) {
        std::cout << "yes";
    } else {
        std::cout << "no";
    }
}
