#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);

    std::getline(std::cin, s);
    int a = std::stoi(s);

    std::getline(std::cin, s);
    int b = std::stoi(s);

    std::getline(std::cin, s);
    int c = std::stoi(s);

    if (a >= b) {
        std::cout << "VEIT EKKI";
    } else {
        if (c < 0) {
            std::cout << "JEDI";
        } else {
            std::cout << "SITH";
        }
    }
}
