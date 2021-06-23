#include <iostream>

int main() {
    int n, t, task, time = 0, total = 0;
    std::cin >> n >> t;

    for (int i=0; i<n; i++) {
        std::cin >> task;
        if (time + task <= t) {
            time += task;
            total++;
        } else {
            break;
        }
    }

    std::cout << total;
}