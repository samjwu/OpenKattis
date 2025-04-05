#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    for (char &c : s) {
        c = tolower(c);
    }
    
    std::cout << s << std::endl;

    std::string copyLower = s;
    for (size_t i = 0; i < s.length(); ++i) {
        if (s[i] == 's' && s[i + 1] == 's') {
            copyLower[i] = 'B';
            copyLower.erase(i+1, 1);
            std::cout << copyLower << std::endl;
            copyLower = s;
        }
    }

    return 0;
}
