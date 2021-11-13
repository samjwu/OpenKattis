#include <iostream>
#include <string>
#include <vector>

int main() {
    int m, n;
    int u, l, r, d;

    std::cin >> m >> n;
    std::cin >> u >> l >> r >> d;

    std::string s;
    std::vector<std::string> v;
    for (int i=0; i<m; i++) {
        std::cin >> s;
        v.push_back(s);
    }

    int length = l + n + r;
    int height = u + m + d;
    int row = 0;

    for (int i=0; i<u; i++) {
        for (int j=0; j<length; j++) {
            if ((row % 2 == 0 && j % 2 == 0) || (row % 2 == 1 && j % 2 == 1)) {
                std::cout << "#";
            } else {
                std::cout << ".";
            }
        }
        row++;
        std::cout << std::endl;
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<l; j++) {
            if ((row % 2 == 0 && j % 2 == 0) || (row % 2 == 1 && j % 2 == 1)) {
                std::cout << "#";
            } else {
                std::cout << ".";
            }
        }

        std::cout << v[i];

        for (int j=length-r; j<length; j++) {
            if ((row % 2 == 0 && j % 2 == 0) || (row % 2 == 1 && j % 2 == 1)) {
                std::cout << "#";
            } else {
                std::cout << ".";
            }
        }

        row++;
        std::cout << std::endl;
    }

    for (int i=0; i<d; i++) {
        for (int j=0; j<length; j++) {
            if ((row % 2 == 0 && j % 2 == 0) || (row % 2 == 1 && j % 2 == 1)) {
                std::cout << "#";
            } else {
                std::cout << ".";
            }
        }
        row++;
        std::cout << std::endl;
    }
}