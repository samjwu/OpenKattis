#include <iostream>

void recurse(int rem, int* ans) {
    if (rem == 0) {
        *ans += 1;
        return;
    } else if (rem < 0) {
        return;
    }

    for (int i=1; i<=3; i++) {
        recurse(rem-i, ans);
    }
}

int main() {
    int n;
    std::cin >> n;

    int ans = 0;

    recurse(n, &ans);

    std::cout << ans;
}