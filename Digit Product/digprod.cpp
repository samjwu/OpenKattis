#include <cctype>
#include <iostream>
#include <string>

int main() {
    std::string numStr;
    std::cin >> numStr;
    int num = 1;

    while (numStr.length() > 1) {
        for (char c: numStr) {
            if (isdigit(c) && c != '0') {
                num *= (c - '0');
            }
        }
        numStr = std::to_string(num);    
        num = 1;
    }

    std::cout << numStr << std::endl;
     
    return 0;
}