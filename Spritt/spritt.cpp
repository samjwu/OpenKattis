#include <iostream>

int main() {
    int n, x, a, need = 0;

    std::cin >> n >> x;

    for (int i = 0; i < n; i++) {
        std::cin >> a;
        need += a;
    }

    if (x >= need) {
        std::cout << "Jebb";
    } else {
        std::cout << "Neibb";
    }
}
