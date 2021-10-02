#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string line;
    
    while (std::getline(std::cin, line)) {
        std::transform(line.begin(), line.end(), line.begin(), ::tolower);

        if (line.find("problem") != std::string::npos) {
            std::cout << "yes" << std::endl;
        } else {
            std::cout << "no" << std::endl;
        }
    }
}