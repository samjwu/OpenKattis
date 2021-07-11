#include <iostream>
#include <string>

int main() {
    std::string binary;
    std::cin >> binary;

    int n = binary.length();

    int padLen = (3 - (n % 3)) % 3;
    std::string padding(padLen, '0');

    binary = padding + binary;

    for (int i=0; i<n; i+=3) {
        int num = 4 * (binary[i] - '0') + 2 * (binary[i+1] - '0') + (binary[i+2] - '0');
        std::cout << num;
    }
}