#include <cctype>
#include <iostream>
#include <string>

bool isPalindrome(const std::string &s) {
    int l = 0;
    int r = s.length()-1;

    while (l < r) {
        if (s[l] != s[r]) {
            return false;
        }

        l++;
        r--;
    }

    return true;
}

int main() {
    std::string s;
    std::getline(std::cin, s);

    std::string parsed = "";
    for (char c : s) {
        if (std::isalpha(c)) {
            parsed += std::tolower(c);
        }
    }

    bool isPalin = false;
    int n = parsed.length();
    
    for (int i = 0; i < n; ++i) {
        for (int len = 2; len <= n-i; ++len) {
            std::string sub = parsed.substr(i, len);
            
            if (isPalindrome(sub)) {
                isPalin = true;
                break;
            }
        }

        if (isPalin) {
            break;
        }
    }

    if (isPalin) {
        std::cout << "Palindrome" << std::endl;
    } else {
        std::cout << "Anti-palindrome" << std::endl;
    }

    return 0;
}
