#include <iostream>

int powerOfTwo(int k) {
    int ans = 1;

    while (ans < k) {
        ans *= 2;
    }

    return ans;
}

int minBreaks(int bars, int k) {
    int ans = 0;
    int count = 0;

    while (count < k) {
        if (count + bars <= k) {
            count += bars;
        } else {
            bars /= 2;
            ans++;
        }
    }

    return ans;
}

int main() {
    int k;
    std::cin >> k;

    int bars = powerOfTwo(k);
    int breaks = minBreaks(bars, k);

    std::cout << bars << ' ' << breaks;
}