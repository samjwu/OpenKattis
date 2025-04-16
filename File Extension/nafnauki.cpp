#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    std::stringstream ss(s);
    std::string token;

    while (std::getline(ss, token, '.')) {}

    std::cout << '.' << token;

    return 0;
}
