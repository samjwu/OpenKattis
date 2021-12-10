#include <cmath>
#include <iostream>
#include <map>

int main() {
    long long n, d, t;
    std::map<long long, long long> times;

    std::cin >> n;

    for (long long i=0; i<n; i++) {
        std::cin >> d >> t;
        times[t]++;
        times[t-d]++;
        times[t-d-d]++;
    }

    long long ans = 0;
    for (auto pair: times) {
        ans = std::max(ans, pair.second);
    }

    std::cout << std::ceil(ans / 2.0);
}