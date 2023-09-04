#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string s;
    std::string ans = "";
    
    while (std::cin >> s) {
        ans.append(s);
    }

    std::sort(ans.begin(), ans.end());

    std::cout << ans;

    return 0;
}
