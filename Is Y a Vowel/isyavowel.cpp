#include <iostream>
#include <string>

int main() {
    std::string s;

    std::cin >> s;

    int vowels = 0;
    int ys = 0;

    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels += 1;
        } else if (c == 'y') {
            ys += 1;
        }
    }

    std::cout << vowels << " " << vowels + ys;
}
