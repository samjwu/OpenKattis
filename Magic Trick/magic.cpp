#include <iostream>
#include <set>

int main() {
    std::set<char> set;
    char str[51];

    std::cin >> str;

    bool guess = 1;
    for (char c: str) {
        if (c < 'a' || c > 'z') {
            break;
        }
        if (set.count(c) > 0) {
            guess = 0;
        }
        set.insert(c);
    }

    std::cout << guess;
}