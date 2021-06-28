#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <utility>

int main() {
    std::map<std::string, std::set<std::string>> foods;
    std::string input, name, word;

    while (true) {
        std::getline(std::cin, input);
        int n = std::stoi(input);

        if (n == 0) {
            break;
        }

        for (int i=0; i<n; i++) {
            std::getline(std::cin, input);
            std::stringstream ss(input);    

            bool firstWord = true;
            while (ss >> word) {
                if (firstWord) {
                    name = word;
                    firstWord = false;
                } else {
                    foods[word].insert(name);
                }
            }
        }

        for (std::pair<std::string, std::set<std::string>> p: foods) {
            std::cout << p.first << " ";

            for (std::string person: p.second) {
                std::cout << person << " ";
            }

            std::cout << std::endl;
        }

        std::cout << std::endl;
        foods.clear();
    }
}