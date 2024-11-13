#include <iostream>

int main() {
    int n, s;
    std::cin >> n >> s;

    int l, r;
    for (int i = 0; i < n; i++) {
        std::cin >> l >> r;

        if (s >= l && s <= r) {
            s += 1;
        }
    }

    std::cout << s;
}
