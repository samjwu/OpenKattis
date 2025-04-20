#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int t, n, s;
    std::vector<int> v;
    std::cin >> t >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end());

    t *= 60;
    int idx = 0;
    int sing = 0;

    while (idx < n && v[idx] <= t) {
        t -= v[idx];
        sing += v[idx];
        idx++;
    }

    std::cout << sing << std::endl;

    return 0;
}
