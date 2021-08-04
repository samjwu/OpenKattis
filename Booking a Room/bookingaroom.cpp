#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> set;
    int r, n, j;
    std::cin >> r >> n;
    
    if (n == r) {
        std::cout << "too late"; 
    } else {
        for (int i=0; i<n; i++) {
            std::cin >> j;
            set.insert(j);
        }

        for (int i=1; i<=r; i++) {
            if (set.count(i) == 0) {
                std::cout << i;
                break;
            }
        }
    }
}