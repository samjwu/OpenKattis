#include <iostream>

int main() {
    int s;
    std::cin >> s;
    std::cout << s << ":" << std::endl;

    for (int i=2; i<=s/2+1; i++) {
        for (int j=i-1; j<=i; j++) {
            int left = s;
            while (left >= 0) {
                if (left == 0 || left-i == 0) {
                    std::cout << i << "," << j << std::endl;
                }
                left -= (i + j);
            }
        }
    }
    
    return 0;
}