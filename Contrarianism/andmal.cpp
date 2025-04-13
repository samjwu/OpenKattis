#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);

    if (s.length() > 1) {
        std::cout << "a\n";
    } else {
        std::cout << "ab\n";
    }

    return 0;
}
