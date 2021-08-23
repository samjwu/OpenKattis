#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

int main() {
    std::map<char, std::set<char>> map = {
        {'2', {'a','b','c'}},
        {'3', {'d','e','f'}},
        {'4', {'g','h','i'}},
        {'5', {'j','k','l'}},
        {'6', {'m','n','o'}},
        {'7', {'p','q','r','s'}},
        {'8', {'t','u','v'}},
        {'9', {'w','x','y','z'}}
    };

    int n;
    std::string word, keys;
    std::vector<std::string> words;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> word;
        words.push_back(word);
    }

    std::cin >> keys;
    int ans = 0;

    for (int i=0; i<n; i++) {
        if (words[i].length() != keys.length()) {
            continue;
        }

        bool possible = true;
        for (int j=0; j<keys.length(); j++) {
            if (map[keys[j]].count(words[i][j]) == 0) {
                possible = false;
                break;
            }
        }

        if (possible) {
            ans++;
        }
    }

    std::cout << ans;
}