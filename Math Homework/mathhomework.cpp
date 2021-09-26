#include <iostream>

int main() {
    int b, d, c, l;
    bool possible = false;
    std::cin >> b >> d >> c >> l;

    for (int i=0; i<=l/b; i++) {
        for (int j=0; j<=l/d; j++) {
            for (int k=0; k<=l/c; k++) {
                if (i*b + j*d + k*c == l) {
                    possible = true;
                    std::cout << i << " " << j << " " << k << std::endl;
                }
            }
        }
    }

    if (!possible) {
        std::cout << "impossible";
    }
}