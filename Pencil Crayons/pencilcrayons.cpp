#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    int n, k;
    std::cin >> n >> k;

    std::string s;
    std::unordered_set<std::string> seen;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            std::cin >> s;

            if (seen.count(s) > 0) {
                ans += 1;
            }

            seen.insert(s);
        }

        seen.clear();
    }

    std::cout << ans;
}
