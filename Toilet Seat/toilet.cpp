#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int n = s.length();
    char lastState = s[0];
    int up = 0, down = 0, golden = 0;

    if (s[1] != lastState) {
        up++;
        down++;
        golden++;
        lastState = s[1];
    }

    if (s[1] == 'D') {
        up++;
    } else {
        down++;
    }

    for (int i=2; i<n; i++) {
        if (s[i] == 'D') {
            up += 2;
        } else {
            down += 2;
        }

        if (s[i] != lastState) {
            golden++;
        }
        lastState = s[i];
    }

    std::cout << up << std::endl;
    std::cout << down << std::endl;
    std::cout << golden << std::endl;
}