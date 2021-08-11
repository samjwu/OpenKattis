#include <cmath>
#include <iostream>
#include <string>

int main() {
    int k, n;
    std::string you, fri;
    
    std::cin >> k;
    std::cin >> you >> fri;
    n = you.length();

    int diff = 0;

    for (int i=0; i<n; i++) {
        if (you[i] != fri[i]) {
            diff++;
        }
    }

    int ans;
    int same = n - diff;
    if (same >= k) {
        ans = k + diff;
    } else {
        ans = same + diff - (k - same);
    }

    std::cout << ans;
}