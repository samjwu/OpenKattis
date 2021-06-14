#include <iostream>
#include <string>

int main() {
    int n, m;
    std::cin >> n >> m;

    int perRoom = m / n;
    std::string line(perRoom, '*');
    int remain = m % n;

    for (int i=0; i<n; i++) {
        std::cout << line;
        if (remain) {
            std::cout << '*';
            remain--;
        }
        std::cout << std::endl;
    }
}