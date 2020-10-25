#include <iostream>
#include <unordered_set>

int main() {
    int n, s, t;
    std::cin >> n;

    std::unordered_set<int> days;
    for (int i=0; i<n; i++) {
        std::cin >> s >> t;
        for (int j=s; j<=t; j++) {
            days.insert(j);
        }
    }

    std::cout << days.size() << std::endl;

    return 0;
}