#include <climits>
#include <iostream>
#include <vector>

int main() {
    int k, q;
    std::cin >> k >> q;

    int a, b;
    std::vector<int> v(k, 0);

    for (int i = 0; i < q; i++) {
        std::cin >> a >> b;
        v[b-1]++;
    }

    int lo = INT_MAX;

    for (int i = 0; i < k; i++) {
        if (v[i] < lo) {
            lo = v[i];
        }
    }

    std::cout << lo;
}
