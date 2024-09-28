#include <iostream>
#include <string>

int main() {
    std::string s;

    std::cin >> s;

    int b = 0, k = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'b') {
            b += 1;
        } else if (s[i] == 'k') {
            k += 1;
        }
    }

    if (b == k && b > 0) {
        std::cout << "boki";
    } else if (b > k && b > 0) {
        std::cout << "boba";
    } else if (k > b && k > 0) {
        std::cout << "kiki";
    } else {
        std::cout << "none";
    }
}
