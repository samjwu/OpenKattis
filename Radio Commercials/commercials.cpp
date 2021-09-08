#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n, p;
    std::cin >> n >> p;

    int m;
    std::vector<int> arr;

    for (int i=0; i<n; i++) {
        std::cin >> m;
        arr.push_back(m - p);
    }

    int ans = arr[0], curr = arr[0];
    for (int i=1; i<n; i++) {
        curr += arr[i];
        curr = std::max(curr, arr[i]);
        ans = std::max(ans, curr);
    }

    if (ans < 0) {
        std::cout << 0;
    } else {
        std::cout << ans;
    }
}