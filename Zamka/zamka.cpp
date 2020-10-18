#include <climits>
#include <iostream>
#include <string>

int digits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int l, d, x;
    std::cin >> l >> d >> x;
    
    int n, m;
    for (int i=l; i<=d; i++) {
        if (digits(i) == x) {
            n = i;
            break;
        }
    }
    for (int i=d; i>=l; i--) {
        if (digits(i) == x) {
            m = i;
            break;
        }
    }

    std::cout << n << std::endl;
    std::cout << m << std::endl;

    return 0;
}