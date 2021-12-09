#include <iostream>
#include <string>

int main() {
    int t, n;
    unsigned long long num;
    int sum = 0;
    std::cin >> t;

    for (int i=0; i<t; i++) {
        sum = 0;
        std::cin >> n;

        for (int j=0; j<n; j++) {
            std::cin >> num;
            sum += num % n;
            sum %= n;
        }

        if (sum % n == 0) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
}