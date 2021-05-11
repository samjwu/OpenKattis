#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void addWords(std::string& s, std::vector<std::string>& words) {
    int block = 0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == '#') {
            words.push_back(s.substr(block, i-block));
            block = i+1;
        }
    }
    words.push_back(s.substr(block));
}

int main() {
    int r, c;
    std::cin >> r >> c;
    std::string word;
    std::vector<std::string> words;
    std::vector<std::string> vertical(c);
    
    for (int i=0; i<r; i++) {
        std::cin >> word;
        addWords(word, words);
        
        for (int j=0; j<word.length(); j++) {
            vertical[j].push_back(word[j]);
        }
    }

    for (int i=0; i<c; i++) {
        addWords(vertical[i], words);
    }

    std::string ans;
    std::sort(words.begin(), words.end());
    for (int i=0; i<words.size(); i++) {
        if (words[i].length() >= 2) {
            ans = words[i];
            break;
        }
    }
    std::cout << ans << std::endl;
}