#include <iomanip>
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    double ans = 1;
    double term = 1;

    for (int i=1; i<=n; i++) {
        term /= i;
        ans += term;
    }

    std::cout << std::setprecision(17) << ans;
}