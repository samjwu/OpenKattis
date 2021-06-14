#include <iostream>

int main() {
    int a, b, c, d;
    int p, m, g;

    std::cin >> a >> b >> c >> d;
    std::cin >> p >> m >> g;

    int cycle1 = a+b;
    int cycle2 = c+d;

    int p1 = p % cycle1, p2 = p % cycle2;
    if ((p1 >= 1 && p1 <= a) && (p2 >= 1 && p2 <= c)) {
        std::cout << "both" << std::endl;
    } else if ((p1 >= 1 && p1 <= a) || (p2 >= 1 && p2 <= c)) {
        std::cout << "one" << std::endl;
    } else {
        std::cout << "none" << std::endl;
    }

    int m1 = m % cycle1, m2 = m % cycle2;
    if ((m1 >= 1 && m1 <= a) && (m2 >= 1 && m2 <= c)) {
        std::cout << "both" << std::endl;
    } else if ((m1 >= 1 && m1 <= a) || (m2 >= 1 && m2 <= c)) {
        std::cout << "one" << std::endl;
    } else {
        std::cout << "none" << std::endl;
    }

    int g1 = g % cycle1, g2 = g % cycle2;
    if ((g1 >= 1 && g1 <= a) && (g2 >= 1 && g2 <= c)) {
        std::cout << "both" << std::endl;
    } else if ((g1 >= 1 && g1 <= a) || (g2 >= 1 && g2 <= c)) {
        std::cout << "one" << std::endl;
    } else {
        std::cout << "none" << std::endl;
    }
}