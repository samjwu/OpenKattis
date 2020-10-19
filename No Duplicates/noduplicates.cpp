#include <cstring>
#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    std::unordered_set<std::string> words;
    std::string word;
    std::string ans = "yes";

    while (std::cin >> word) {
        if (words.count(word) > 0) {
            ans = "no";
            break;
        }
        words.insert(word);
    }
    
    std::cout << ans << std::endl;
    
    return 0;
}