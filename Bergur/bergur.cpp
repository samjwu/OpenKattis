#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> maxTime(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> maxTime[i];
    }

    std::vector<int> takenTime(n);
    takenTime[n-1] = maxTime[n-1];
    int ans = takenTime[n-1];

    for (int i = n-2; i >= 0; --i) {
        takenTime[i] = std::min(maxTime[i], takenTime[i + 1]);
        ans += takenTime[i];
    }

    std::cout << ans << std::endl;

    return 0;
}
