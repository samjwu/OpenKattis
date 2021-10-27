#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> transpose(std::vector<std::string>& words, int r, int c) {
    std::vector<std::string> result(c);

    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            result[j].push_back(words[i][j]);
        }
    }

    return result;
}

int main() {
    int r, c;
    std::string s;

    while (std::cin >> r >> c) {
        if (r == 0 && c == 0) {
            break;
        }

        std::vector<std::string> words;
        for (int i=0; i<r; i++) {
            std::cin >> s;
            words.push_back(s);
        }

        std::vector<std::string> wordsT = transpose(words, r, c);
        std::stable_sort(wordsT.begin(), wordsT.end(), [](std::string s1, std::string s2) {
            std::transform(s1.begin(), s1.end(), s1.begin(), [](char c) {
                return tolower(c);
            });
            std::transform(s2.begin(), s2.end(), s2.begin(), [](char c) {
                return tolower(c);
            });
            return s1 < s2;
        });

        std::vector<std::string> ans = transpose(wordsT, c, r);
        for (int i=0; i<r; i++) {
            std::cout << ans[i] << std::endl;
        }
        std::cout << std::endl;
    }
}