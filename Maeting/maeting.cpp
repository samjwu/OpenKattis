#include <iostream>
#include <map>
#include <vector>

int main() {
    int n, m, x;
    std::map<int, int> freq;
    std::vector<int> v;

    std::cin >> n >> m;

    for (int i = 0; i < n; i++) {
        std::cin >> x;
        freq[x] += 1;
        v.push_back(x);
    }

    for (int i = 0; i < m; i++) {
        std::cin >> x;
        freq[x] += 1;
    }

    for (int num : v) {
        if (freq[num] == 2) {
            std::cout << num << " ";
        }
    }
}
