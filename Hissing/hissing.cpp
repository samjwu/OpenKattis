#include <iostream>
#include <string>

int main() {
    std::string input;
    getline(std::cin, input);
    
    for (int i=0; i<input.length()-1; i++) {
        if (input[i] == 's' && input[i+1] == 's') {
            std::cout << "hiss" << std::endl;
            return 0;
        }
    }

    std::cout << "no hiss" << std::endl;

    return 0;
}