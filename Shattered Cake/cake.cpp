#include <iostream>

int main() {
    int w, n, l;
    std::cin >> w >> n;

    int wi, li;
    int area = 0;
    for (int i=0; i<n; i++) {
        std::cin >> wi >> li;
        area += wi * li;
    }

    l = area / w;
    std::cout << l << std::endl;

    return 0;
}