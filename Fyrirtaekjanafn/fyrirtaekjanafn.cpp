#include <iostream>
#include <string>

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main() {
    std::string s;
    std::cin >> s;

    std::string vowels = "aeiou";
    for (char c : s) {
        if (isVowel(c)) {
            std::cout << c;
        }
    }
}
