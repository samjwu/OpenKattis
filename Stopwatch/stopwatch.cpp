#include <iostream>

int main() {
    int n;
    int now;
    int prev;
    int time = 0;

    std::cin >> n;
    if (n%2 == 1) {
        std::cout << "still running" << std::endl;
    } else {
        for (int i=1; i<=n; i++) {
            std::cin >> now;
            if (i%2 == 0) {
                time += now - prev;
            }
            prev = now;
        }
        std::cout << time << std::endl;
    }

    return 0;
}