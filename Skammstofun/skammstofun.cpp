#include <iostream>
#include <string>

int main() {
    int n;

    std::cin >> n;

    std::string s;

    for (int i = 0; i < n; i++) {
        std::cin >> s;

        if (s[0] >= 'A' && s[0] <= 'Z') {
            std::cout << s[0];
        }
    }
}
