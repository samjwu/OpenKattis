#include <iostream>
#include <vector>

int main() {
    int n;
    while (std::cin >> n) {
        if (n == -1) {
            break;
        }

        std::vector<std::vector<int>> mat(n, std::vector<int>(n, 0));
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                std::cin >> mat[i][j];
            }
        }

        for (int i=0; i<n; i++) {
            bool weak = true;
            for (int j=0; j<n; j++) {
                for (int k=0; k<n; k++) {
                    if (mat[i][j] && mat[i][k] && mat[j][k] && i!=j && i!=k && j!=k) {
                        weak = false;
                    }
                }
            }
            if (weak == true) {
                std::cout << i << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}