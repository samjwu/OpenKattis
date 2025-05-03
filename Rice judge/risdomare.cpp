#include <iostream>
#include <string>

int main() {
    int n, a, b;
    std::string s;
    bool isGrain = false;
    int bestA = 0, bestB = 0, bestRice = 1, biggest = -1;

    std::cin >> n >> s;
    if (s == "storlek") isGrain = true;

    for (int i = 1; i <= n; ++i) {
        std::cin >> a >> b;
        int sum = a + b;

        if (sum > biggest ||
           (sum == biggest && (!isGrain && a > bestA)) ||
           (sum == biggest && isGrain && b > bestB)) {
            bestA = a;
            bestB = b;
            bestRice = i;
            biggest = sum;
        }
    }

    std::cout << bestRice << std::endl;
    return 0;
}
