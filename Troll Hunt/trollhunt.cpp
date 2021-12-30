#include <iostream>

int main() {
    int b, k, g;
    std::cin >> b >> k >> g;

    int groups = k / g;

    // if only 1 bridge remains after x days, the troll must be there
    int days = (b-1) / groups;
    if ((b-1) % groups > 0) {
        days++;
    }

    std::cout << days;
}