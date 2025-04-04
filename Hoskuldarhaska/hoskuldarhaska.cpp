#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::vector<std::string> splitString(const std::string& str) {
    std::vector<std::string> words;
    std::stringstream ss(str);
    std::string word;
    
    while (ss >> word) {
        words.push_back(word);
    }

    return words;
}

void generateCombinations(const std::vector<std::vector<std::string>>& v, std::vector<std::string>& sentence, int idx) {
    if (idx == v.size()) {
        for (size_t i = 0; i < sentence.size(); i++) {
            if (i > 0) {
                std::cout << " ";
            }
            std::cout << sentence[i];
        }
        std::cout << std::endl;
        return;
    }

    for (const std::string& word : v[idx]) {
        sentence.push_back(word);
        generateCombinations(v, sentence, idx + 1);
        sentence.pop_back();
    }
}

int main() {
    int n, k;
    std::string s;
    std::vector<std::vector<std::string>> v;

    std::getline(std::cin, s);
    n = std::stoi(s);
    v.resize(n);

    for (int i = 0; i < n; i++) {
        std::getline(std::cin, s);

        v[i] = splitString(s);
        v[i].erase(v[i].begin());
        std::sort(v[i].begin(), v[i].end());
    }

    std::vector<std::string> sentence;
    generateCombinations(v, sentence, 0);

    return 0;
}
