#include <cmath>
#include <iostream>

int main() {
    double ga1, gb1, ga2, gb2;
    double ea1, eb1, ea2, eb2;
    std::cin >> ga1 >> gb1 >> ga2 >> gb2;
    std::cin >> ea1 >> eb1 >> ea2 >> eb2;

    double gavg = (ga1+gb1+ga2+gb2)/4;
    double eavg = (ea1+eb1+ea2+eb2)/4;

    if (gavg > eavg) {
        std::cout << "Gunnar" << std::endl;
    } else if (gavg == eavg) {
        std::cout << "Tie" << std::endl;
    } else {
        std::cout << "Emma" << std::endl;
    }
     
    return 0;
}