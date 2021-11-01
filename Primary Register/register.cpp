#include <iostream>
#include <set>
#include <string>
#include <vector>

int main() {
    std::vector<int> v = {
        2,3,5,7,11,13,17,19
    };

    int ans = 0, p;

    for (int i=0; i<8; i++) {
        std::cin >> p;
        if (i != 0) {
            p++;
        }

        int ticks = v[i] - p;

        for (int j=i-1; j>=0; j--) {
            ticks *= v[j];
        }

        ans += ticks;
    }

    std::cout << ans-1;
}