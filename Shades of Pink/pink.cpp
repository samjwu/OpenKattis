#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    int n = stoi(input);
    int pink = 0;

    for (int i=0; i<n; i++) {
        std::getline(std::cin, input);
        std::transform(input.begin(), input.end(), input.begin(), [](char c){return std::tolower(c);});
        for (int j=0; j<input.length(); j++) {
            if (input.substr(j, 4) == "pink" || input.substr(j, 4) == "rose") {
                pink++;
                break;
            }
        }
    }

    if (pink > 0) {
        std::cout << pink << std::endl;
    } else {
        std::cout << "I must watch Star Wars with my daughter" << std::endl;
    }

    return 0;
}