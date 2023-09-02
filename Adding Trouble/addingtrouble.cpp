#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    
    if (a+b == c) {
        std::cout << "correct!";
    } else {
        std::cout << "wrong!";
    }
}
