#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    int n = stoi(input);
    for (int i=0; i<n; i++) {
        std::getline(std::cin, input);
        std::cout << input.length() << std::endl;
    }

    return 0;
}