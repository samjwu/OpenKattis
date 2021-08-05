#include <iostream>
#include <string>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;
    char ch;
    std::vector<bool> emptyColumn(m, true);

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            std::cin >> ch;
            if (ch == '$') {
                emptyColumn[j] = false;
            }
        }
    }

    int rating = 1;
    for (int i=0; i<m; i++) {
        if (emptyColumn[i] == true) {
            rating++;
        }
    }

    std::cout << rating;
}