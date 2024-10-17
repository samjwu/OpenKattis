#include <iostream>
#include <string>
#include <vector>

int main() {
    int n, r, c;
    std::string s;
    std::vector<std::string> v;

    std::cin >> n >> r >> c;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            std::cin >> s;

            if (j == 0) {
                v.push_back(s);
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            std::cin >> s;

            if (j == 0) {
                if (s == v[i]) {
                    std::cout << "left" << std::endl;
                } else {
                    std::cout << "right" << std::endl;
                }
            }
        }
    }
}
