#include <iostream>

int main() {
    int n, a, b;
    std::cin >> n;

    int people = 0;
    int most = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> a >> b;

        people += b - a;
        if (people > most) {
            most = people;
        }
    }

    std::cout << most;
}
