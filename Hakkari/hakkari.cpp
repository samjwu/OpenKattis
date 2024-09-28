#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
    int m, n;
    std::string s;
    std::vector<std::string> ans;
    int mines = 0;
    std::ostringstream oss;

    std::cin >> m >> n;

    for (int i = 0; i < m; i++) {
        std::cin >> s;

        for (int j = 0; j < n; j++) {
            if (s[j] == '*') {
                mines += 1;
                oss << i+1 << " " << j+1;
                ans.push_back(oss.str());
                oss.str("");
                oss.clear();
            }
        }
    }

    std::cout << mines << std::endl;

    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << std::endl;
    }
}
