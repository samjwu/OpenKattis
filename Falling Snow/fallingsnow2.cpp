#include <iostream>
#include <string>
#include <vector>

int main() {
    int n, m;
    
    std::cin >> n >> m;

    std::string s;

    std::vector<int> snow(m);

    for (int i = 0; i < n; i++) {
        std::cin >> s;

        for (int j = 0; j < m; j++) {
            if (s[j] == 'S') {
                snow[j] += 1;
            }
        }
    }

    for (int i = n-1; i >= 0; i--) {
        for (int j = 0; j < m; j++) {
            if (i < snow[j]) {
                std::cout << "S";
            } else {
                std::cout << ".";
            }
        }

        std::cout << std::endl;
    }
}
