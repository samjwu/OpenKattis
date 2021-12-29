#include <iostream>
#include <queue>
#include <string>

int main() {
    int n, l, m, c;
    std::string s;
    std::queue<int> left, right;

    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> l >> m;
        
        for (int j=0; j<m; j++) {
            std::cin >> c >> s;

            if (s.compare("left") == 0) {
                left.push(c);
            } else {
                right.push(c);
            }
        }

        int ans = 0;

        while (!left.empty() || !right.empty()) {
            int curr = 0;

            while (!left.empty() && left.front() + curr <= l * 100) {
                curr += left.front();
                left.pop();
            }
            ans++;

            if (left.empty() && right.empty()) {
                break;
            }

            curr = 0;
            while (!right.empty() && right.front() + curr <= l * 100) {
                curr += right.front();
                right.pop();
            }
            ans++;
        }

        std::cout << ans << std::endl;
    }
}