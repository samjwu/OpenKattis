#include <iostream>
#include <vector>

int main() {
    int n, dm;
    int di;
    int ans = -1;

    std::cin >> n >> dm;

    for (int i=0; i<n; i++) {
        std::cin >> di;
        if (di <= dm) {
            ans = i;
            break;
        }
    }

    if (ans == -1) {
        std::cout << "It had never snowed this early!";
    } else {
        std::cout << "It hadn't snowed this early in " << ans << " years!";
    }
}