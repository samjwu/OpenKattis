#include <iostream>

int main() {
    int a, b;
    int whole = 0;
    while (std::cin >> a >> b) {
        if (a == 0 && b == 0) {
            break;
        }

        whole = 0;
        while (a >= b) {
            a -= b;
            whole++;
        }
        std::cout << whole << " " << a << " / " << b << std::endl;
    }

    return 0;
}