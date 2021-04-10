#include <iostream>

int main() {
    int n, p, s;
    int m;
    int card;
    bool match;
    std::cin >> n >> p >> s;

    for (int i=0; i<s; i++) {
        std::cin >> m;
        match = false;

        for (int j=0; j<m; j++) {
            std::cin >> card;
            if (card == p) {
                match = true;
            }
        }

        if (match) {
            std::cout << "KEEP" << std::endl;
        } else {
            std::cout << "REMOVE" << std::endl;
        }
    }

    return 0;
}