#include <iostream>

int main() {
    char c;

    while (std::cin.get(c)) {
        if (c == '\n') {
            break;
        } else if (c == ' ') {
            continue;
        }

        std::cout << c;
    }
}
