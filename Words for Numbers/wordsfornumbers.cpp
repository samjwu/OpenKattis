#include <cctype>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> wordMap = {
        {0, "zero"},
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"},
        {5, "five"},
        {6, "six"},
        {7, "seven"},
        {8, "eight"},
        {9, "nine"},
        {10, "ten"},
        {11, "eleven"},
        {12, "twelve"},
        {13, "thirteen"},
        {14, "fourteen"},
        {15, "fifteen"},
        {16, "sixteen"},
        {17, "seventeen"},
        {18, "eighteen"},
        {19, "nineteen"},
        {20, "twenty"},
        {30, "thirty"},
        {40, "forty"},
        {50, "fifty"},
        {60, "sixty"},
        {70, "seventy"},
        {80, "eighty"},
        {90, "ninety"}
    };

    std::string line, word;
    std::stringstream ss;

    while (std::getline(std::cin, line)) {
        ss.str(std::string());
        ss.clear();
        ss.str(line);

        bool first = true;

        while (ss >> word) {
            if (std::isdigit(word[0])) {
                int num = std::stoi(word);

                if (num <= 20) {
                    std::string ans = wordMap[num];
                    if (first) {
                        ans[0] = std::toupper(ans[0]);
                    }

                    std::cout << ans << ' ';
                } else {
                    int rem = num % 10;

                    std::string ans = wordMap[num - rem];
                    
                    if (first) {
                        ans[0] = std::toupper(ans[0]);
                    }

                    if (rem != 0) {
                        std::cout << ans << '-' << wordMap[rem] << ' ';
                    } else {
                        std::cout << ans << ' ';
                    }
                }
            } else {
                std::cout << word << ' ';
            }
            
            first = false;
        }

        std::cout << std::endl;
    }
}