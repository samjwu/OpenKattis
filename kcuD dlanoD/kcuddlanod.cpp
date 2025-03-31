#include <algorithm>
#include <iostream>
#include <string>

std::string mirror(std::string s) {
    std::reverse(s.begin(), s.end());

    for (char &c : s) {
        if (c == '2') {
            c = '5';
        } else if (c == '5') {
            c = '2';
        }
    }

    return s;
}

int main() {
    std::string s1, s2;
    std::cin >> s1 >> s2;

    if (std::stoi(mirror(s1)) > std::stoi(mirror(s2))) {
        std::cout << 1;
    } else {
        std::cout << 2;
    }
}
