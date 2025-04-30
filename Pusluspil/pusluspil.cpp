#include <iostream>
#include <unordered_set>

int main() {
    int n, m;
    std::cin >> n >> m;

    int k, p;
    std::unordered_set<int> pieces;

    for (int i = 0; i < n; ++i) {
        std::cin >> k;

        for (int j = 0; j < k; ++j) {
            std::cin >> p;
            pieces.insert(p);
        }
    }

    if (pieces.size() == m) {
        std::cout << "Jebb" << std::endl;
    } else {
        std::cout << "Neibb" << std::endl;
    }

    return 0;
}
