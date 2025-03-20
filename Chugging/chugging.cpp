#include <iostream>

int main() {
    int n, ta, da, tb, db;
    std::cin >> n >> ta >> da >> tb >> db;

    int time1 = (n / 2) * (2 * ta + (n - 1) * da);
    int time2 = (n / 2) * (2 * tb + (n - 1) * db);

    if (time1 == time2) {
        std::cout << "=";
    } else if (time1 > time2) {
        std::cout << "Bob";
    } else {
        std::cout << "Alice";
    }
}
