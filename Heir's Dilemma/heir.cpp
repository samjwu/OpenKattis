#include <iostream>
#include <set>

void getDigits(int n, std::set<int>& digits) {
    for (int i=0; i<6; i++) {
        digits.insert(n%10);
        n /= 10;
    }
}

bool isDivisible(int n, std::set<int>& digits) {
    for (int digit: digits) {
        if (digit == 0 || n % digit != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int l, h;
    std::cin >> l >> h;

    int ans = 0;
    for (int i=l; i<=h; i++) {
        std::set<int> digits;
        getDigits(i, digits);
        if (digits.size() == 6 && isDivisible(i, digits)) {
            ans++;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}