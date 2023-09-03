#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);

    bool hasSmile = s.find(":)") != std::string::npos;
    bool hasFrown = s.find(":(") != std::string::npos;

    if (hasSmile && hasFrown) {
        std::cout << "double agent";
    } else if (hasSmile) {
        std::cout << "alive";
    } else if (hasFrown) {
        std::cout << "undead";
    } else {
        std::cout << "machine";
    }
}
