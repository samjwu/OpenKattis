#include <iostream>
#include <string>

int main() {
    std::string s;

    std::getline(std::cin, s);

    char prev = '\0';

    for (char c : s) {
        if (prev != c) {
            std::cout << c;
        }
        prev = c;
    }
}
