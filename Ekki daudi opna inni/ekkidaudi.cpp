#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::vector<std::string> parseInput() {
    std::string line;

    std::getline(std::cin, line);

    std::stringstream ss(line);

    std::vector<std::string> parts;

    while (std::getline(ss, line, '|')) {
        parts.push_back(line);
    }

    return parts;
}

int main() {
    std::vector<std::string> parts1 = parseInput();
    std::vector<std::string> parts2 = parseInput();

    for (int i = 0; i < 2; i++) {
        std::cout << parts1[i];
        std::cout << parts2[i] << " ";
    }
}
