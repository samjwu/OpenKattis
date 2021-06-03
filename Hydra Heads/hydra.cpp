#include <iostream>

int getMoves(int h, int t) {
    int ans = 0;

    if (h%2 == 0) {
        // move 2 until t is multiple of 4
        ans += (4 - (t%4)) % 4;
        t += (4 - (t%4)) % 4;
    } else { // odd heads
        // move 2 until t is 2 more than a multiple of 4 (4x+2)
        if (t%4 == 0) {
            ans += 2;
            t += 2;
        } else if (t%4 == 1 || t%4 == 3) {
            ans += (t%4);
            t += (t%4);
        }
    }

    // move 4 until no tails left
    ans += t/2;
    h += t/2;
    // move 3 until no heads left
    ans += h/2;

    return ans;
}

int main() {
    int h, t;
    std::cin >> h >> t;

    while (h != 0 && t != 0) {
        int s = -1;
        if (!(h%2 == 1 && t == 0)) { // impossible if odd heads and no tails
            s = getMoves(h, t);
        }

        std::cout << s << std::endl;
        std::cin >> h >> t;
    }
}