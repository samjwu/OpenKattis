#include <cctype>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_set>

std::string toLower(std::string word) {
    std::string ans;
    for (char c: word) {
        ans.push_back(std::tolower(c));
    }
    return ans;
}

int main() {
    std::unordered_set<std::string> seen;
    std::string line, word;

    while (std::getline(std::cin, line)) {
        std::stringstream ss(line);
        while (ss >> word) {
            std::string low = toLower(word);
            if (seen.count(low)) {
                std::cout << ". ";
            } else {
                std::cout << word << " ";
                seen.insert(low);
            }
        }
        std::cout << std::endl;
    }
}