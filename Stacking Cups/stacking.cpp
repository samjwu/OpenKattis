#include <cctype>
#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<int, std::string> cups;
    std::string input, input2;
    std::getline(std::cin, input);
    int n = std::stoi(input);
    
    int radius;
    for (int i=0; i<n; i++) {
        std::cin >> input >> input2;
        if (isdigit(input[0])) {
            radius = std::stoi(input) / 2;
            cups[radius] = input2;
        } else {
            radius = std::stoi(input2);
            cups[radius] = input;
        }
    }

    std::map<int, std::string>::iterator it;
    for (it=cups.begin(); it!=cups.end(); it++) {
        std::cout << it->second << std::endl;
    }
    
    return 0;
}