#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> elements(n);
    std::vector<int> rungs(m);

    for (int i = 0; i < n; ++i) {
        elements[i] = i + 1;
    }

    for (int i = 0; i < m; ++i) {
        std::cin >> rungs[i];
    }

    for (int i = 0; i < m; ++i) {
        std::swap(elements[rungs[i]-1], elements[rungs[i]]);
    }

    for (int i = 0; i < n; ++i) {
        std::cout << elements[i] << std::endl;
    }
}
