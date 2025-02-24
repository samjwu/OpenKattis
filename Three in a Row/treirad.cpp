#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int left = 0;
    int right = 1000;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        int product = mid * (mid+1) * (mid+2);
        if (product >= n) {
            right = mid-1;
        } else {
            left = mid+1;
        }
    }

    std::cout << right << std::endl;
}
