#include <iostream>

int main() {
    int m;

    std::cin >> m;

    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    std::cout << days[m-1];
}
