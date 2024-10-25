#include <cctype>
#include <iostream>
#include <string>

int main() {
    int n;
    std::string s;

    std::getline(std::cin, s);
    n = std::stoi(s);

    for (int i = 0; i < n; i++) {
        std::getline(std::cin, s);

        for (int j = 0; j < s.length(); j++) {
            char c = s[j];
            if (j == 0) {
                std::cout << static_cast<char>(std::toupper(c));
            } else if (std::isupper(c)) {
                std::cout << static_cast<char>(std::tolower(c));
            } else {
                std::cout << c;
            }
        }

        std::cout << std::endl;
    }
}
