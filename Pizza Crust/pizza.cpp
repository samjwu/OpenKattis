#include <iostream>

int main() {
    double r, c;
    std::cin >> r >> c;
    double diff = r-c;
    
    std::cout.precision(11);
    std::cout << (diff*diff) / (r*r) * 100 << std::endl;

    return 0;
}