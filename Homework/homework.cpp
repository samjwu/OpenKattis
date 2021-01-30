#include <iostream>
#include <string>

int main() {
    std::string input;
    std::string n1, n2;
    int n = 0;

    while (std::getline(std::cin, input, ';')) {
        std::string::size_type pos = input.find("-");
        if (pos != std::string::npos) {
            n1 = input.substr(0, pos);
            n2 = input.substr(pos+1);
            n += std::stoi(n2) - std::stoi(n1) + 1;
        } else {
            n++;
        }
    }

    std::cout << n << std::endl;
    
    return 0;
}