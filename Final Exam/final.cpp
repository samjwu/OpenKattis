#include <iostream>

int main() {
    int n;
    std::cin >> n;
    char prev = 'E';
    char input;

    int ans = 0;
    for (int i=0; i<n; i++) {
        std::cin >> input;
        if (input == prev) {
            ans++;
        }
        prev = input;
    }

    std::cout << ans << std::endl;

    return 0;
}