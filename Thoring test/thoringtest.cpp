#include <iostream>
#include <sstream>
#include <string>
#include <unordered_set>

std::string toLower(const std::string& s) {
    std::string lower = s;

    for (char& c : lower) {
        c = std::tolower(static_cast<unsigned char>(c));
    }
        
    return lower;
}

int main() {
    int n;
    std::string s, word;
    std::unordered_set<std::string> dictionary;

    std::getline(std::cin, s);
    n = std::stoi(s);

    for (int i = 0; i < n; ++i) {
        std::getline(std::cin, s);
        dictionary.insert(toLower(s));
    }

    std::getline(std::cin, s);
    std::stringstream ss(s);

    while (std::getline(ss, word, ' ')) {
        if (dictionary.find(toLower(word)) == dictionary.end()) {
            std::cout << "Thore has left the chat" << std::endl;
            return 0;
        }
    }

    std::cout << "Hi, how do I look today?" << std::endl;

    return 0;
}
