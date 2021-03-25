#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    std::string word, guess;
    std::unordered_set<char> letters;

    std::cin >> word;
    std::cin >> guess;

    for (char c: word) {
        letters.insert(c);
    }

    int wrong = 0;
    for (char c: guess) {
        if (letters.count(c)) {
            letters.erase(c);
        } else {
            wrong++;
        }

        if (wrong == 10) {
            std::cout << "LOSE" << std::endl;
            break;
        }

        if (letters.size() == 0) {
            std::cout << "WIN" << std::endl;
            break;
        }
    }

    return 0;
}