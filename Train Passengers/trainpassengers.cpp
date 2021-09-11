#include <iostream>

int main() {
    int c, n;
    std::cin >> c >> n;

    bool possible = true;
    int curr = 0, exit, enter, wait;

    for (int i=0; i<n; i++) {
        std::cin >> exit >> enter >> wait;

        if (exit > curr) {
            possible = false;
        }

        curr += enter - exit;
        
        if (curr < 0 || curr > c || (curr < c && wait > 0)) {
            possible = false;
        }
    }

    if (curr != 0 || wait > 0) {
        possible = false;
    }

    if (possible) {
        std::cout << "possible";
    } else {
        std::cout << "impossible";
    }
}