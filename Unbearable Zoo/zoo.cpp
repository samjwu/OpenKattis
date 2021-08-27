#include <cctype>
#include <iostream>
#include <map>
#include <sstream>
#include <string>

void lowered(std::string& s) {
    for (int i=0; i<s.length(); i++) {
        s[i] = std::tolower(s[i]);
    }
}

int main() {
    std::string line, word;
    std::getline(std::cin, line);
    int n = std::stoi(line);
    int listNum = 0;

    while (n != 0) {
        listNum++;
        std::map<std::string, int> animals;

        for (int i=0; i<n; i++) {
            std::getline(std::cin, line);
            std::stringstream ss(line);
            while (ss >> word) { }
            lowered(word);
            animals[word]++;
        }

        std::cout << "List " << listNum << ":" << std::endl;
        for (auto p: animals) {
            std::cout << p.first << " | " << p.second << std::endl;
        }

        std::getline(std::cin, line);
        n = std::stoi(line);
    }
}