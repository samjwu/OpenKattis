#include <cctype>
#include <iostream>
#include <set>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    int n = stoi(input);
    std::set<char> alphabet;

    for (int i=0; i<n; i++) {
        for (int j=0; j<26; j++) {
            alphabet.insert('a'+j);
        }
        std::getline(std::cin, input);
        for (char ch:input) {
            alphabet.erase((char) std::tolower(ch));
        }
        if (alphabet.size() == 0) {
            std::cout << "pangram" << std::endl;
        } else {
            std::cout << "missing ";
            for (char ch:alphabet) {
                std::cout << ch;
            }
            std::cout << std::endl;
        }
    }

    return 0;
}