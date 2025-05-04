#include <cmath>
#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int remainder = m % n;

    std::cout << std::ceil(static_cast<double>(remainder) / n) << std::endl;

    return 0;
}
