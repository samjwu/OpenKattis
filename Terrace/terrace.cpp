#include <iostream>
#include <string>

int main() {
    int l, x;
    std::string input;
    std::getline(std::cin, input, ' ');
    l = std::stoi(input);
    std::getline(std::cin, input);
    x = std::stoi(input);

    int denied = 0;
    int p = 0;
    for (int i=0; i<x; i++) {
        std::getline(std::cin, input, ' ');
        if (input == "enter") {
            std::getline(std::cin, input);
            if (p + std::stoi(input) > l) {
                denied++;
            } else {
                p += std::stoi(input);
            }
        } else {
            std::getline(std::cin, input);
            p -= std::stoi(input);
        }
    }

    std::cout << denied << std::endl;

    return 0;
}