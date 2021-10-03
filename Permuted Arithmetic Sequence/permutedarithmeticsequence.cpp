#include <algorithm>
#include <iostream>
#include <vector>

bool isArithmetic(std::vector<int>& v) {
    int diff = v[1] - v[0];
    for (int i=2; i<v.size(); i++) {
        if (diff != v[i] - v[i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> v;
    int n, m, a;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        v.clear();
        std::cin >> m;
        for (int j=0; j<m; j++) {
            std::cin >> a;
            v.push_back(a);
        }

        if (isArithmetic(v)) {
            std::cout << "arithmetic" << std::endl;
            continue;
        }
        std::sort(v.begin(), v.end());
        if (isArithmetic(v)) {
            std::cout << "permuted arithmetic" << std::endl;
        } else {
            std::cout << "non-arithmetic" << std::endl;
        }
    }
}