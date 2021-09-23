#include <iostream>

int unscramble(int b) {
    for (int i=0; i<256; i++) {
        if ((i ^ (i & 0b01111111) << 1) == b) {
            return i;
        }
    }

    return -1;
}

int main() {
    int n, b;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> b;
        std::cout << unscramble(b) << " ";
    }
}