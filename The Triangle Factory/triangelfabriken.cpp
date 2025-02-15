#include <algorithm>
#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int hi = std::max(a, std::max(b, c));

    if (hi > 90) {
        std::cout << "Trubbig Triangel";
    } else if (hi == 90) {
        std::cout << "Ratvinklig Triangel";
    } else {
        std::cout << "Spetsig Triangel";
    }
}
