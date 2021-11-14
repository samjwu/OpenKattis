#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    int n = stoi(input);
    
    for (int i=0; i<n; i++) {
        std::getline(std::cin, input);
        if ((input.substr(0, 11)).compare("simon says ") == 0) {
            std::cout << input.substr(11) << std::endl;
        } else {
            std::cout << std::endl;
        }
    }
    
    return 0;
}