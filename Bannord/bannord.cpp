#include <iostream>
#include <sstream>
#include <string>
#include <set>

int main() {
    std::string ban, s, word;
    std::getline(std::cin, ban);
    std::getline(std::cin, s);
    std::set<char> banned(ban.begin(), ban.end());
    std::istringstream iss(s);

    while (iss >> word) {
        if (word.find('\n') != std::string::npos) {
            break;
        }

        bool is_forbidden = false;
        for (char c : word) {
            if (banned.count(c) > 0) {
                is_forbidden = true;
                break;
            }
        }

        if (is_forbidden) {
            for (int i = 0; i < word.length(); i++) {
                std::cout << '*';
            }
            std::cout << ' ';
        } else {
            std::cout << word << ' ';
        }
    }
}
