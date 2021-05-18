#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string input, word;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    
    double count = 0, ae = 0;
    while (ss >> word) {
        if (word.find("ae") != std::string::npos) {
            ae++;
        }
        count++;
    }

    if (ae / count >= 0.4) {
        std::cout << "dae ae ju traeligt va" << std::endl;
    } else {
        std::cout << "haer talar vi rikssvenska" << std::endl;
    }
}