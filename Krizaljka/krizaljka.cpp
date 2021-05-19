#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string a, b;
    std::cin >> a >> b;
    int n = a.length();
    int m = b.length();

    bool found = false;
    int crossRow, crossCol;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (a[i] == b[j]) {
                crossRow = i;
                crossCol = j;
                found = true;
                break;
            }
        }

        if (found) {
            break;
        }
    }

    std::vector<std::vector<char>> crossWord(n, std::vector<char>(m, '.'));
    for (int i=0; i<n; i++) {
        crossWord[i][crossCol] = a[i];
    }

    for (int j=0; j<m; j++) {
        crossWord[crossRow][j] = b[j];
    }

    for (int j=0; j<m; j++) {
        for (int i=0; i<n; i++) {
            std::cout << crossWord[i][j];
        }
        std::cout << std::endl;
    }
}