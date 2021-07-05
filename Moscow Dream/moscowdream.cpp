#include <iostream>

int main() {
    int a, b, c, n;
    std::cin >> a >> b >> c >> n;

    if (a > 0 && b > 0 && c > 0 && n >= 3 && a+b+c >= n) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}