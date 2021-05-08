#include <iostream>

int gcd(int p, int q) {
    if (q == 0) {
        return p;
    }

    return gcd(q, p%q);
}

int lcm(int p, int q) {
    return p * q / gcd(p, q);
}

int main() {
    int p, q, s;
    std::cin >> p >> q >> s;
    if (lcm(p, q) <= s) {
        std::cout << "yes" << std::endl;    
    } else {
        std::cout << "no" << std::endl;    
    } 
}