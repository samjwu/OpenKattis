#include <iostream>
#include <set>
#include <string>
#include <vector>

int main() {
    std::string word;
    std::set<std::string> wordSet, compounds;
    std::vector<std::string> wordList;

    while (std::cin >> word) {
        if (wordSet.count(word) == 0) {
            wordList.push_back(word);
        }

        wordSet.insert(word);
    }

    int n = wordList.size();
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            compounds.insert(wordList[i] + wordList[j]);
            compounds.insert(wordList[j] + wordList[i]);
        }
    }

    for (std::string s: compounds) {
        std::cout << s << std::endl;
    }
}