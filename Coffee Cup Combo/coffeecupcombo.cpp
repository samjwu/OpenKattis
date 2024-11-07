#include <iostream>
#include <string>

int main () {
    int n, coffee = 0, ans = 0;
    std::string s;

    std::cin >> n >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            coffee = 3;
        }
        if (coffee > 0) {
            coffee -= 1;
            ans += 1;
        }
    }

    std::cout << ans;
}
