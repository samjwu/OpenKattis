#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string input, block, name;
    double avg, count;
    
    while (std::getline(std::cin, input)) {
        std::stringstream ss(input);
        name.clear();
        avg = 0;
        count = 0;
        
        while (ss >> block) {
            if (isdigit(block[0])) {
                avg += std::stod(block);
                count++;
            } else {
                name.append(block);
                name.push_back(' ');
            }
        }

        avg /= count;
        std::cout << avg << ' ' << name << std::endl;
    }
}