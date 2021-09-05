#include <iostream>
#include <set>
#include <string>

bool isValid(std::string& word, char mid, std::set<char>& letters) {
    int n = word.length();

    if (n < 4) {
        return false;
    }

    for (char c: word) {
        if (letters.count(c) == 0) {
            return false;
        }
    }

    return word.find(mid) != std::string::npos;
}

int main() {
    std::string hex, word;
    int n;
    std::cin >> hex >> n;
    
    char mid = hex[0];
    std::set<char> letters;
    for (char c: hex) {
        letters.insert(c);
    }

    for (int i=0; i<n; i++) {
        std::cin >> word;
        if (isValid(word, mid, letters)) {
            std::cout << word << std::endl;
        }
    }
}