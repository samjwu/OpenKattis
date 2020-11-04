#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string input;
    getline(std::cin, input);
    int n = stoi(input);
    getline(std::cin, input);
    
    std::string aAns = "ABC";
    std::string bAns = "BABC";
    std::string cAns = "CCAABB";
    int a = 0, b = 0, c = 0;
    int maxans;
    for (int i=0; i<n; i++) {
        if (input[i] == aAns[i%3]) {
            a++;
        }
        if (input[i] == bAns[i%4]) {
            b++;
        }
        if (input[i] == cAns[i%6]) {
            c++;
        }
        maxans = std::max({a, b, c});
    }

    std::cout << maxans << std::endl;
    if (a == maxans) {
        std::cout << "Adrian" << std::endl;
    }
    if (b == maxans) {
        std::cout << "Bruno" << std::endl;
    }
    if (c == maxans) {
        std::cout << "Goran" << std::endl;
    }

    return 0;
}