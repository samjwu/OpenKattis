#include <iostream>
#include <string>

int main() {
    int t;
    std::string n;

    std::cin >> t;

    for (int i=0; i<t; i++) {
        std::cin >> n;
        
        int sum = 0;
        int d2;
        bool even = true;
        for (int i=n.length()-1; i>=0; i--) {
            char c = n[i];
            even = !even;

            if (even) {
                d2 = 2 * (c-'0');
            } else {
                d2 = (c-'0');
            }

            if (d2 < 10) {
                sum += d2;
            } else {
                while (d2) {
                    sum += d2 % 10;
                    d2 /= 10;
                }
            }
        }

        if (sum % 10 == 0) {
            std::cout << "PASS" << std::endl;
        } else {
            std::cout << "FAIL" << std::endl;
        }
    }
    
    return 0;
}