#include <iostream>

int main() {
    long long a, b;
    std::cin >> a >> b;

    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    
    std::cout << a;
}
