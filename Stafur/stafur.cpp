#include <iostream>

int main() {
    char c;

    std::cin >> c;

    if (c == 'Y') {
        std::cout << "Kannski";
    } else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        std::cout << "Jebb";
    } else {
        std::cout << "Neibb";
    }
}
