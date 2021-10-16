#include <iostream>

int main() {
    long long n;
    std::cin >> n;

    int ans = 1;

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3*n + 1;
        }
        ans++;
    }

    std::cout << ans;
}