#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    int q = n - m;

    if (q < 0) {
        if (q == -1) {
            std::cout << "Dr. Chaz will have " << -q << " piece of chicken left over!";
        } else {
            std::cout << "Dr. Chaz will have " << -q << " pieces of chicken left over!";
        }
    } else {
        if (q == 1) {
            std::cout << "Dr. Chaz needs " << q << " more piece of chicken!";
        } else {
            std::cout << "Dr. Chaz needs " << q << " more pieces of chicken!";
        }
    }
}