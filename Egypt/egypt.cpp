#include <algorithm>
#include <iostream>
#include <vector>

bool isRight(std::vector<int> &v) {
    if (v[0]*v[0] + v[1]*v[1] == v[2]*v[2]) {
        return true;
    }

    return false;
}

int main() {
    int a, b, c;

    while (std::cin >> a >> b >> c) {
        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        std::vector<int> v = {a, b, c};
        std::sort(v.begin(), v.end());

        if (isRight(v)) {
            std::cout << "right" << std::endl;
        } else {
            std::cout << "wrong" << std::endl;
        }
    }
}