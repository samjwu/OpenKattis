#include <iostream>

int main() {
    int n, k;
    int expenses = 0;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> k;
        if (k < 0) {
            expenses += -k;
        }
    }

    std::cout << expenses << std::endl;

    return 0;
}