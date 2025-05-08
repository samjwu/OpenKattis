#include <iostream>

int main() {
    int i, w, l, h;
    std::cin >> i;

    if (i == 1) {
        std::cin >> l;
        w = l;
        h = 3;
    } else if (i == 2) {
        std::cin >> w >> l;
        h = 3;
    } else {
        std::cin >> w >> l >> h;
    }

    h -= 1;
    int blocks = 2*(w-2)*h + 2*l*h + w*l;

    std::cout << blocks << std::endl;

    return 0;
}
