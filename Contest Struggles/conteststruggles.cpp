#include <iostream>

int main() {
    int n, k;
    double d, s;
    std::cin >> n >> k >> d >> s;

    double totalDifficulty = n * d;
    double remainingDifficulty = totalDifficulty - k * s;
    double remainingAverage = remainingDifficulty / (n - k);

    if (remainingAverage < 0 || remainingAverage > 100) {
        std::cout << "impossible";
    } else {
        std::cout.precision(10);
        std::cout << remainingAverage;
    }
}