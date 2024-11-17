#include <iostream>
#include <string>

int main() {
    int r, c;
    std::cin >> r >> c;

    std::string s;
    int left, right;
    int unbalanced = 0;
    for (int i = 0; i < r; i++) {
        std::cin >> s;

        int spaces = c - s.length();

        if (spaces % 2 == 1) {
            unbalanced += 1;
        }

        if (unbalanced % 2 == 0) {
            left = (spaces+1) / 2;
            right = (spaces) / 2;
        } else {
            left = (spaces) / 2;
            right = (spaces+1) / 2;
        }

        for (int j = 0; j < left; j++) {
            std::cout << '.';
        }
        std::cout << s;
        for (int j = 0; j < right; j++) {
            std::cout << '.';
        }
        std::cout << std::endl;
    }
}
