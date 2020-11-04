#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string input;
    getline(std::cin, input);
    int n = stoi(input);
    getline(std::cin, input);
    
    std::unordered_map<int, char> aAns = {{0, 'A'}, {1, 'B'}, {2, 'C'}};
    std::unordered_map<int, char> bAns = {{0, 'B'}, {1, 'A'}, {2, 'B'}, {3, 'C'}};
    std::unordered_map<int, char> cAns = {{0, 'C'}, {1, 'C'}, {2, 'A'}, {3, 'A'}, {4, 'B'}, {5, 'B'}};
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
        maxans = std::max(a, std::max(b, c));
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