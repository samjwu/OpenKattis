#include <iostream>

int main() {
    int y;
    std::cin >> y;

    int monthDiff = (y - 2018) * 12;
    bool optimal = false;
    for (int i=monthDiff-3; i<monthDiff+9; i++) {
        if (i % 26 == 0) {
            optimal = true;
            break;
        }
    }

    if (optimal) {
        std::cout << "yes";
    } else {
        std::cout << "no";
    }
}