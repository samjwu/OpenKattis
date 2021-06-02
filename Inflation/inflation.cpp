#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<double> v;
    int n;
    double c;

    std::cin >> n;
    for (int i=0; i<n; i++) {
        std::cin >> c;
        v.push_back(c);
    }

    std::sort(v.begin(), v.end());
    
    bool explode = false;
    double f = 1;
    for (int i=1; i<=n; i++) {
        if (v[i-1] > i) {
            explode = true;
        }
        f = std::min(f, v[i-1]/i);
    }

    if (explode) {
        std::cout << "impossible";
    } else {
        std::cout << f;
    }
}