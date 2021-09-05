#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string a, b, op;
    std::cin >> a >> op >> b;

    if (op.compare("+") == 0) {
        int zeroes = std::max(a.length(), b.length()) - 1;
        std::string zeroStr(zeroes + 1, '0');
        if (a.length() != b.length()) {
            zeroStr[zeroes + 1 - a.length()] = '1';
            zeroStr[zeroes + 1 - b.length()] = '1';
        } else {
            zeroStr[zeroes + 1 - a.length()] = '2';
        }
        std::cout << zeroStr;
    } else {
        int zeroes = a.length() + b.length() - 2;
        std::string zeroStr(zeroes, '0');
        std::cout << "1" << zeroStr;
    }
}