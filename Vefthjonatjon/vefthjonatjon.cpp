#include <algorithm>
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    char c;
    int cpu = 0, mem = 0, hdd = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> c;
        if (c == 'J') {
            cpu += 1;
        }
        std::cin >> c;
        if (c == 'J') {
            mem += 1;
        }
        std::cin >> c;
        if (c == 'J') {
            hdd += 1;
        }
    }

    std::cout << std::min(cpu, std::min(mem, hdd));
}
