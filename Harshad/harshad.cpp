#include <iostream>

int digits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isHarshad(int n) {
    int sum_digits = digits(n);
    if (n % sum_digits == 0) {
        return true;
    }
    return false;
}

int main() {
    int n;
    std::cin >> n;

    while (isHarshad(n) == false) {
        n++;
    }

    std::cout << n << std::endl;

    return 0;
}