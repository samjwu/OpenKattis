#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cin >> input;
    int n = input.size() + 1 - 4;

    std::string output = "WAHO";
    std::cout << output;

    while (n) {
        std::cout << "O";
        n--;
    }
}