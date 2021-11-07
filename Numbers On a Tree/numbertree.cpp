#include <iostream>
#include <string>

int main() {
    int h;
    std::string s;
    std::cin >> h;
    std::cin >> s;

    int curr = 1;
    for (char c: s) {
        curr *= 2;
        if (c == 'R') {
            curr++;
        }
    }

    std::cout << (1 << (h+1)) - curr;
}