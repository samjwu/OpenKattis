#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int ans = 0;
    int sideLen = 1;

    while (n >= sideLen * sideLen) {
        ans++;
        n -= sideLen * sideLen;
        sideLen += 2;
    }

    std::cout << ans;
}