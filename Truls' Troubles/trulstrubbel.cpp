#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int t = 0, h = 0;

    for (char c : s) {
        if (c == 'T') {
            t++;
            if (t >= 11 && t-h >= 2) {
                t = 0;
                h = 0;
            }
        } else {
            h++;
            if (h >= 11 && h-t >= 2) {
                t = 0;
                h = 0;
            }
        }
    }

    std::cout << t << "-" << h;
}
