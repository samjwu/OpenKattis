#include <iostream>

int main() {
    int r, c;
    std::cin >> r >> c;

    if (r*c % 2 == 1) {
        std::cout << "Beata" << std::endl;
    } else {
        std::cout << "Alf" << std::endl;
    }

    return 0;
}
