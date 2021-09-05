#include <iostream>

int main() {
    int n, t;
    double p, k;
    std::cin >> n >> p >> k;
    p /= 100;

    double time = k;
    for (int i=0; i<n; i++) {
        std::cin >> t;
        time += (k - t) * p;
    }

    std::cout.precision(10);
    std::cout << time;
}