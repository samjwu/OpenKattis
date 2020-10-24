#include <cmath>
#include <iostream>

int main() {
    double x;
    std::cin >> x;

    int paces = (int) std::round(x*1000*5280/4854);

    std::cout << paces << std::endl;

    return 0;
}