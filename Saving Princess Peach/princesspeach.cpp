#include <iostream>
#include <set>

int main() {
    int n, y, x;
    std::cin >> n >> y;

    std::set<int> seen;
    for (int i=0; i<y; i++) {
        std::cin >> x;
        seen.insert(x);
    }

    for (int i=0; i<n; i++) {
        if (seen.find(i) == seen.end()) {
            std::cout << i << std::endl;
        }
    }

    std::cout << "Mario got " << seen.size() << " of the dangerous obstacles.";
}