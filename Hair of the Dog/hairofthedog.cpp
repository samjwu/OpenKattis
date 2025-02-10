#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::string change;
    int state = -1;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> change;
        if (change == "drunk") {
            state = 1;
        } else { // sober
            if (state == 1) {
                ans += 1;
            }
            state = 0;
        }
    }

    std::cout << ans;
}
