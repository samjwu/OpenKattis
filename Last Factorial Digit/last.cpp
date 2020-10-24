#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int t;
    int product = 1;
    for (int i=0; i<n; i++) {
        std::cin >> t;
        product = 1;
        for (int j=1; j<=t; j++) {
            product *= j;
        }
        std::cout << product % 10 << std::endl;
    }
     
    return 0;
}