#include <iostream>
#include <string>

int main() {
    int n, b, t = 0;
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> b;
        t += b;
    }

    std::cout << t << std::endl;

    return 0;
}
