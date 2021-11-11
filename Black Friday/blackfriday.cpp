#include <iostream>
#include <map>

int main() {
    int n, a;
    std::cin >> n;

    std::map<int, int> freq, idx;
    int ans = -1;

    for (int i=1; i<=n; i++) {
        std::cin >> a;
        freq[a]++;
        idx[a] = i;
    }

    for (int i=1; i<=6; i++) {
        if (freq[i] == 1) {
            ans = i;
        }
    }

    if (ans == -1) {
        std::cout << "none";
    } else {
        std::cout << idx[ans];
    }
}