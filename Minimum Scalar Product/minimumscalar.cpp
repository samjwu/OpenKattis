#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<long long> v1, v2;
    long long num;
    int t, n, x = 1;
    std::cin >> t;

    for (int i=0; i<t; i++) {
        std::cin >> n;

        for (int j=0; j<n; j++) {
            std::cin >> num;
            v1.push_back(num);
        }

        for (int j=0; j<n; j++) {
            std::cin >> num;
            v2.push_back(num);
        }

        std::sort(v1.begin(), v1.end());
        std::sort(v2.begin(), v2.end());

        long long ans = 0;
        for (int j=0; j<n; j++) {
            ans += v1[j] * v2[n-1-j];
        }

        std::cout << "Case #" << x << ": " << ans << std::endl;
        x++;
        v1.clear();
        v2.clear();
    }
}