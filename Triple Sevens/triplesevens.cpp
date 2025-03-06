#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    int d, sevens = 0;

    for (int i = 0; i < 3; i++) {
        bool hasSeven = false;

        for (int j = 0; j < n; j++) {
            std::cin >> d;
            
            if (d == 7) {
                hasSeven = true;
            }
        }

        sevens += hasSeven;
    }

    if (sevens == 3) {
        std::cout << 777;
    } else {
        std::cout << 0;
    }
}
