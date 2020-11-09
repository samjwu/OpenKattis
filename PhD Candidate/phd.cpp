#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    int n = std::stoi(input);

    for (int i=0; i<n; i++) {
        std::getline(std::cin, input);
        if (input.compare("P=NP") == 0) {
            std::cout << "skipped" << std::endl;
        } else {
            int plus = input.find('+');
            int ans = std::stoi(input.substr(0, plus)) + std::stoi(input.substr(plus+1, std::string::npos));
            std::cout << ans << std::endl;
        }
    }
    
    return 0;
}