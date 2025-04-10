#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::string ans;
    int hi = -1;
    std::string s;
    int contro;
    int cool;

    for (int i = 0; i < n; ++i) {
        std::cin >> s >> contro >> cool;
        int score = contro * cool;

        if (score > hi || (score == hi && s < ans)) {
            hi = score;
            ans = s;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
