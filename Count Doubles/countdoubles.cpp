#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int ans = 0;
    int evenCount = 0;

    for (int i = 0; i < m; ++i) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
    }

    if (evenCount >= 2) {
        ans++;
    }

    for (int i = m; i < n; ++i) {
        if (arr[i - m] % 2 == 0) {
            evenCount--;
        }

        if (arr[i] % 2 == 0) {
            evenCount++;
        }

        if (evenCount >= 2) {
            ans++;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
