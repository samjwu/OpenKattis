#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string num1;
    std::string num2;
    getline(std::cin, num1, ' ');
    getline(std::cin, num2);

    for (int i=2; i>=0; i--) {
        if (num1[i] > num2[i]) {
            reverse(num1.begin(), num1.end());
            std::cout << num1 << std::endl;
            break;
        } else if (num1[i] < num2[i]) {
            reverse(num2.begin(), num2.end());
            std::cout << num2 << std::endl;
            break;
        }
    }

    return 0;
}