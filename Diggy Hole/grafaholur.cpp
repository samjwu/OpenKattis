#include <iostream>

int main() {
    double n, h, x, m, y;
    std::cin >> n >> h >> x >> m >> y;

    double workerRatePerHour = x / n / h;
    std::cout << y / (workerRatePerHour * m);

    return 0;
}
