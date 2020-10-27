#include <iostream>

int main() {
    int k;
    std::cin >> k;

    int a = 0;
    int b = 1;
    int prev_a;
    for (int i=1; i<k; i++) {
        prev_a = a;
        a = b;
        b += prev_a;
    }
    

    std::cout << a << " " << b << std::endl;

    return 0;
}