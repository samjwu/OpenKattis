#include <iostream>
#include <string>

int main() {
    int n;
    std::string s;
    char prev = '\0';

    std::getline(std::cin, s);
    n = s.length();

    for (int i = 0; i < n; i++) {
        if (s[i] != prev) {
            std::cout << s[i];
        }
        prev = s[i];
    }
}
