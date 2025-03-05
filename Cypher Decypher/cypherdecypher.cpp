#include <iostream>
#include <string>

char mkiaMapping(char c, char digit) {
    int charVal = c - 'A';
    int multiplier = digit - '0';

    int result = (charVal * multiplier) % 26;

    return result + 'A';
}

int main() {
    std::string digits, s;
    int n, l;
    std::cin >> digits >> n;

    l = digits.length();

    for (int i = 0; i < n; i++) {
        std::cin >> s;

        for (int j = 0; j < l; j++) {
            std::cout << mkiaMapping(s[j], digits[j]);
        }
        std::cout << std::endl;
    }
}
