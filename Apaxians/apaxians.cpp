#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);

    int i = 0;
    while (i<input.length()-1) {
        if (input[i] == input[i+1]) {
            input.erase(i, 1);
        } else {
            i++;
        }
    }

    std::cout << input << std::endl;

    return 0;
}