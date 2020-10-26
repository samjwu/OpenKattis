#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    std::string input;
    std::getline(std::cin , input);

    std::string ans;
    std::unordered_set<char> vowel = {'a', 'e', 'i', 'o', 'u'};
    for (int i=0; i<input.length(); i++) {
        if (vowel.count(input[i]) == 1) {
            i += 2;   
        }
        ans.push_back(input[i]);
    }

    std::cout << ans << std::endl;

    return 0;
}