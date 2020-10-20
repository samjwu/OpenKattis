#include <algorithm>
#include <iostream>

int main() {
    int l, r;
    std::cin >> l >> r;

    if (l == 0 && r == 0) {
        std::cout << "Not a moose" << std::endl;
    } else if (l == r) {
        std::cout << "Even " << l*2 << std::endl;
    } else { //l != r
        std::cout << "Odd " << std::max(l, r) * 2 << std::endl;
    }

    return 0;
}