#include <iostream>
#include <string>

int main() {
    std::string s, ans = "";
    std::cin >> s;

    int idx = 0;
    for (char c: s) {
        if (c == 'L') {
            idx--;
        } else if (c == 'R') {
            idx++;
        } else if (c == 'B') {
            ans.erase(idx-1, 1);
            idx--;
        } else {
            ans.insert(idx, 1, c);
            idx++;
        }
    }

    std::cout << ans;
}