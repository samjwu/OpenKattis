#include <iostream>

int main() {
    int n, s;
    int sum = 0;
    int high = -1, highIdx = 0;
    
    std::cin >> n;
    for (int i=0; i<n; i++) {
        std::cin >> s;
        sum += s;
        if (s > high) {
            high = s;
            highIdx = i+1;
        }
    }

    if (sum - high < high) {
        std::cout << "impossible";
        return 0;
    }

    std::cout << highIdx << " ";
    for (int i=0; i<n; i++) {
        if (i + 1 != highIdx) {
            std::cout << i + 1 << " ";
        }
    }
}