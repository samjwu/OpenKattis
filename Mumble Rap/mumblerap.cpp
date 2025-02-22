#include <iostream>
#include <string>

int main() {
    int n, curr = 0, hi = 0;
    std::string s;
    
    std::cin >> n >> s;
    for (char c : s) {
        if (c >= '0' && c <= '9') {
            curr *= 10;
            curr += c-'0';
        } else {
            curr = 0;
        }

        if (curr > hi) {
            hi = curr;
        }
    }

    std::cout << hi;
}
