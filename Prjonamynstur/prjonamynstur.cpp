#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {
    std::map<char, int> yarn = {
        {'.', 20},
        {'O', 10},
        {'\\', 25},
        {'/', 25},
        {'A', 35},
        {'^', 5},
        {'v', 22}
    };

    int n, m;
    std::cin >> n >> m;
    std::string s;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> s;

        for (int j = 0; j < m; j++) {
            ans += yarn[s[j]];
        }
    }

    std::cout << ans;
}
