#include <iostream>

int main() {
    int h, w, n;
    std::cin >> h >> w >> n;
    int b, remaining = w;
    bool complete = false;

    for (int i=0; i<n; i++) {
        std::cin >> b;

        remaining -= b;
        if (remaining == 0) {
            h--;
            remaining = w;
        } else if (remaining < 0) {
            h = -1;
        }

        if (h == 0) {
            complete = true;
        }
    }

    if (complete) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}