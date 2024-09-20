#include <iostream>

int main() {
    int a;
    int b;

    std::cin >> a >> b;

    if (a > b) {
        std::cout << "MAGA!";
    } else if (a < b) {
        std::cout << "FAKE NEWS!";
    } else {
        std::cout << "WORLD WAR 3!";
    }
}
