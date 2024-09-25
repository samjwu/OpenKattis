#include <iostream>

int main() {
    int n, k, a;

    std::cin >> n >> k;

    for (int i = 0; i < n; i++) {
        std::cin >> a;

        if (a == k) {
            if (i == 0) {
                std::cout << "fyrst";
            } else if (i == 1) {
                std::cout << "naestfyrst";
            } else {
                std::cout << i+1 << " fyrst";
            }
        }
    }
}
