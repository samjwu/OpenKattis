#include <iostream>

int sumDigits(int n) {
    int sum = 0;
    while (n) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int owlCalc(int n) {
    int digits = sumDigits(n);
    int smaller = n - 1;
    while (sumDigits(smaller) != digits - 1) {
        smaller--;
    }
    return smaller;
}

int main() {
    int t, n;
    std::cin >> t;

    for (int i=0; i<t; i++) {
        std::cin >> n;
        std::cout << owlCalc(n) << std::endl;
    }
}