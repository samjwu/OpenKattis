#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> line(n, 1);
    int d;

    for (int i=1; i<n; i++) {
        std::cin >> d;
        line[d+1] = i+1;
    }

    for (int i=0; i<n; i++) {
        std::cout << line[i] << " ";
    }
}