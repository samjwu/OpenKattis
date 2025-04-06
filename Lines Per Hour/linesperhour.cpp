#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n, lph;
    std::cin >> n >> lph;

    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());

    int ans = 0;
    int total = 0;

    for (int i = 0; i < n; ++i) {
        if (total + v[i] <= 5 * lph) {
            total += v[i];
            ++ans;
        } else {
            break;
        }
    }

    std::cout << ans << std::endl;
    
    return 0;
}
