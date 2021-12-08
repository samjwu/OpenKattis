#include <cmath>
#include <iostream>

int numberPrimeFactors(long long n) {
    int ans = 0;

    // check all 2s
    while (n % 2 == 0) {
        n /= 2;
        ans++;
    }

    // check all other primes greater than 2
    for (int i=3; i<=std::sqrt(n); i+=2) {
        while (n % i == 0) {
            n /= i;
            ans++;
        }
    }

    // check in the case that the remainder is a prime number greater than 2
    if (n > 2) {
        ans++;
    }

    return ans;
}

int main() {
    long long n;
    std::cin >> n;
    std::cout << numberPrimeFactors(n) << std::endl;
}