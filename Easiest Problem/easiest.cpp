#include <iostream>

int sumDigits(int n) {
    int sum = 0;

    while (n) {
        sum += n%10;
        n /= 10;
    }

    return sum;
}

int main() {
    int n;
    std::cin >> n;

    while (n != 0) {
        int p = 11;
        while (sumDigits(n) != sumDigits(n*p)) {
            p++;
        }

        std::cout << p << std::endl;
        std::cin >> n;
    }

    return 0;
}