#include <iostream>

int main() {
    int t;
    std::cin >> t;

    for (int test = 0; test < t; ++test) {
        int row1[5], row2[5];
        bool found = false;

        for (int i = 0; i < 5; ++i) {
            std::cin >> row1[i];
        }

        for (int i = 0; i < 5; ++i) {
            std::cin >> row2[i];
        }

        for (int i = 0; i < 5 && !found; ++i) {
            for (int j = 0; j < 5; ++j) {
                if (i != j && row1[i] == row2[j]) {
                    found = true;
                    break;
                }
            }
        }

        if (found) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
