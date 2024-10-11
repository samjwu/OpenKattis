#include <cctype>
#include <iostream>
#include <string>

int main() {
    std::string s;

    std::cin >> s;

    if (s.find("69") != std::string::npos || s.find("420") != std::string::npos) {
        std::cout << "Mergjad!";
    } else {
        std::cout << "Leim!";
    }
}
