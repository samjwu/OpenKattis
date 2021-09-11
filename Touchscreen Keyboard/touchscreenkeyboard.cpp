#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

int main() {
    std::unordered_map<char, std::pair<int, int>> loc;

    std::string keyboard = "qwertyuiop";
    for (int i=0; i<keyboard.length(); i++) {
        loc[keyboard[i]] = std::make_pair(0, i);
    }
    keyboard = "asdfghjkl";
    for (int i=0; i<keyboard.length(); i++) {
        loc[keyboard[i]] = std::make_pair(1, i);
    }
    keyboard = "zxcvbnm";
    for (int i=0; i<keyboard.length(); i++) {
        loc[keyboard[i]] = std::make_pair(2, i);
    }

    int t;
    std::cin >> t;

    std::string original, word;
    int l;
    std::vector<std::pair<std::string, int>> words;
    for (int i=0; i<t; i++) {
        std::cin >> original >> l;

        for (int j=0; j<l; j++) {
            int dist = 0;
            std::cin >> word;
            for (int k=0; k<word.length(); k++) {
                dist += std::abs(loc[original[k]].first - loc[word[k]].first) + std::abs(loc[original[k]].second - loc[word[k]].second);
            }
            words.push_back(std::make_pair(word, dist));
        }

        std::sort(words.begin(), words.end(), [](std::pair<std::string, int> pair1, std::pair<std::string, int> pair2) {
            if (pair1.second == pair2.second) {
                return pair1.first < pair2.first;
            }
            return pair1.second < pair2.second;
        });

        for (auto pair: words) {
            std::cout << pair.first << " " << pair.second << std::endl;
        }

        words.clear();
    }
}