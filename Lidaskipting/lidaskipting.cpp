#include <iostream>
#include <string>

int main() {
    std::string n;
    std::cin >> n;

    int digits = 0;
    for (char c : n) {
        digits += c - '0';
    }

    if (digits % 3 == 0) {
        std::cout << "Jebb";
    } else {
        std::cout << "Neibb";
    }
}
