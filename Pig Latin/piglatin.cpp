#include <iostream>
#include <set>
#include <sstream>
#include <string>

int findVowelIdx(std::string word, std::set<char>& vowels) {
    int idx = 0;
    while (vowels.count(word[idx]) == 0) {
        idx++;
    }
    return idx;
}

int main() {
    std::set<char> vowels = {
        'a','e','i','o','u','y'
    };
    std::string line, word;

    while (std::getline(std::cin, line)) {
        std::stringstream ss(line);
        
        while (ss >> word) {
            int vowel = findVowelIdx(word, vowels);
            if (vowel == 0) {
                std::cout << word << "yay ";
            } else {
                std::cout << word.substr(vowel) << word.substr(0, vowel) << "ay ";
            }
        }

        std::cout << std::endl;
    }
}