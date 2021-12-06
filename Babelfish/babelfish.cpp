#include <iostream>
#include <unordered_map>
#include <sstream>
#include <string>

int main() {
    std::string line, translation, word;
    std::stringstream ss;
    std::unordered_map<std::string, std::string> dict;

    while (true) {
        std::getline(std::cin, line);
        if (line.empty()) {
            break;
        }

        ss.str(std::string());
        ss.clear();
        ss.str(line);
        ss >> translation >> word;

        dict[word] = translation;
    }

    while (std::getline(std::cin, word)) {
        if (dict.find(word) != dict.end()) {
            std::cout << dict[word] << std::endl;
        } else {
            std::cout << "eh" << std::endl;
        }
    }
}