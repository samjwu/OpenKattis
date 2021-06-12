#include <algorithm>
#include <iostream>
#include <unordered_set>

int main() {
    int n;
    std::cin >> n;

    int num, highest = 0;
    std::unordered_set<int> numSet;
    for (int i=0; i<n; i++) {
        std::cin >> num;
        highest = std::max(highest, num);
        numSet.insert(num);
    }

    if (n == highest) {
        std::cout << "good job";
    } else {
        for (int i=1; i<=highest; i++) {
            if (numSet.count(i) == 0) {
                std::cout << i << std::endl;
            }
        }
    }
}