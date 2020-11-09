#include <iostream>
#include <vector>

int main() {
    int p, k;
    int numerator, denominator;
    char op;
    std::vector<int> lr; // left or right
    std::cin >> p;

    for (int i=0; i<p; i++) {
        std::cin >> k;
        std::cin >> numerator >> op >> denominator;

        while (numerator != 1 || denominator != 1) {
            if (numerator > denominator) {
                numerator -= denominator;
                lr.push_back(1);
            } else { // d > n
                denominator -= numerator;
                lr.push_back(0);
            }
        }

        int ans = 1;
        for (int i=lr.size()-1; i>=0; i--) {
            ans = ans * 2 + lr[i];
        }
        lr.clear();
        
        std::cout << i+1 << " " << ans << std::endl;
    }

    return 0;
}