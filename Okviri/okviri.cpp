#include <iostream>
#include <string>

void printOuterEdge(int n) {
    for (int i=1; i<=n; i++) {
        if (i%3 == 0) {
            std::cout << "..*.";
        } else {
            std::cout << "..#.";
        }
    }

    std::cout << "." << std::endl;
}

void printInnerEdge(int n) {
    for (int i=1; i<=n; i++) {
        if (i%3 == 0) {
            std::cout << ".*.*";
        } else {
            std::cout << ".#.#";
        }
    }
    
    std::cout << "." << std::endl;
}

void printInside(std::string s, int n) {
    int idx = 0;

    for (int i=1; i<=n; i++) {
        if (i%3 == 0) {
            std::cout << "*." << s[idx++] << ".";
        } else if (i > 1 && (i-1)%3 == 0) {
            std::cout << "*." << s[idx++] << ".";
        } else {
            std::cout << "#." << s[idx++] << ".";
        }
    }
    
    if (n%3 == 0) {
        std::cout << "*" << std::endl;
    } else {
        std::cout << "#" << std::endl;
    }
}

int main() {
    std::string word;
    std::cin >> word;

    int n = word.length();

    printOuterEdge(n);
    printInnerEdge(n);
    printInside(word, n);
    printInnerEdge(n);
    printOuterEdge(n);
}