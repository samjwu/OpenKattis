#include <iostream>

int main() {
    int n, num, sum = 0;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> num;
        sum += num;
    }
    
    std::cout << sum;
}