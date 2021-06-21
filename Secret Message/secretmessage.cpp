#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

void reflectDiag(std::vector<std::vector<char>>& mat) {
    int n = mat.size();

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i >= j) {
                std::swap(mat[i][j], mat[j][i]);
            }
        }
    }
}

void reflectVert(std::vector<std::vector<char>>& mat) {
    int n = mat.size();

    for (int i=0; i<n; i++) {
        for (int j=0; j<n/2; j++) {
            std::swap(mat[i][j], mat[i][n-1-j]);
        }
    }
}

void rotate(std::vector<std::vector<char>>& mat) {
    reflectDiag(mat);
    reflectVert(mat);
}

int main() {
    int n;
    std::cin >> n;
    std::string line;

    for (int i=0; i<n; i++) {
        std::cin >> line;
        
        int minSq = std::ceil(std::sqrt(line.length()));
        std::vector<std::vector<char>> mat(minSq, std::vector<char>(minSq, '*'));

        for (int j=0; j<line.length(); j++) {
            mat[j / minSq][j % minSq] = line[j];
        }

        rotate(mat);

        for (int k=0; k<minSq; k++) {
            for (int l=0; l<minSq; l++) {
                if (mat[k][l] != '*') {
                    std::cout << mat[k][l];
                }
            }
        }

        std::cout << std::endl;
    }
}