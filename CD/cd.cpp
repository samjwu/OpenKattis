#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, bool> jack;
    int n, m, cd, ans = 0;

    while (true) {
        std::cin >> n >> m;

        if (n == 0 && m == 0) {
            break;
        }

        for (int i=0; i<n; i++) {
            std::cin >> cd;
            jack[cd] = true;
        }

        for (int i=0; i<m; i++) {
            std::cin >> cd;
            if (jack[cd] == true) {
                ans++;
            }
        }

        std::cout << ans << std::endl;
        jack.clear();
        ans = 0;
    }
}