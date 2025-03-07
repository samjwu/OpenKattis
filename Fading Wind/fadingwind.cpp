#include <iostream>

int main() {
    int h, k, v, s;
    std::cin >> h >> k >> v >> s;

    int dist = 0;

    while (h > 0) {
        v += s;
        v -= std::max(1, v/10);

        if (v >= k) {
            h++;
        } else if (v > 0) {
            h--;

            if (h == 0) {
                v = 0;
            }
        } else {
            h = 0;
            v = 0;
        }

        dist += v;

        if (s > 0) {
            s--;
        }
    }

    std::cout << dist;
}
