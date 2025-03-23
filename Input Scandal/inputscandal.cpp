#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string s;
    std::vector<std::string> lines;

    while (std::getline(std::cin, s)) {
        lines.push_back(s);
    }

    std::cout << lines.size() << std::endl;
    for (std::string line : lines) {
        std::cout << line << std::endl;
    }
}
