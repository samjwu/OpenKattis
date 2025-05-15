#include <iostream>
#include <string>
#include <unordered_set>

bool isHappy(int n) {
    std::unordered_set<int> seen;

    while (n != 1 && seen.find(n) == seen.end()) {
        seen.insert(n);
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        n = sum;
    }

    return n == 1;
}

bool isPrime(int n) {
    if (n <= 1 || n % 2 == 0) {
        return false;
    }

    if (n == 2) {
        return true;
    }

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

std::string isHappyPrime(int n) {
    if (isHappy(n) && isPrime(n)) {
        return "YES";
    }

    return "NO";
}

int main() {
    int p, k, m;
    std::string result;

    std::cin >> p;

    for (int i = 0; i < p; ++i) {
        std::cin >> k >> m;
        result = isHappyPrime(m);
        std::cout << k << ' ' << m << ' ' << result << std::endl;
    }

    return 0;
}
