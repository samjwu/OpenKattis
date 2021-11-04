#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string input, num;
    
    while (std::getline(std::cin, input)) {
        std::stringstream ss(input);
        int sum = 0;
        while (ss >> num) {
            sum += std::stoi(num);
        }
        std::cout << sum/2 << std::endl;
    }
}