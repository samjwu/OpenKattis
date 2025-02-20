#include <iostream>
#include <string>
#include <vector>

int main() {
    int n;
    std::string a, b;
    std::vector<bool> charsA, charsB;
    bool isAbbreviation;
    
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> a >> b;
        
        charsA = std::vector<bool>(26, false);
        charsB = std::vector<bool>(26, false);

        for (auto c : a) {
            charsA[c - 'a'] = true;
        }
        for (auto c : b) {
            charsB[c - 'a'] = true;
        }

        isAbbreviation = true;
        for (int j = 0; j < 26; j++) {
            if (charsA[j] == false && charsB[j] == true) {
                isAbbreviation = false;
                break;
            }
        }

        if (isAbbreviation) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
}
