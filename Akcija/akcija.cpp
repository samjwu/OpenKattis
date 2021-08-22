#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n, c, ans = 0;
    std::vector<int> v;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> c;
        v.push_back(c);
    }

    std::sort(v.begin(), v.end(), std::greater<>());
    for (int i=0; i<n; i++) {
        if ((i+1) % 3 == 0) {
            continue;
        }
        ans += v[i];
    }

    std::cout << ans;
}