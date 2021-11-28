#include <iostream>
#include <map>
#include <string>

int main() {
    int t, n, m;
    std::string s;
    std::map<int, int> ones; // # of 1s at index
    std::cin >> t;

    for (int i=0; i<t; i++) {
        std::cin >> n >> m;

        for (int j=0; j<n; j++) {
            std::cin >> s;
            for (int k=0; k<m; k++) {
                if (s[k] == '1') {
                    ones[k]++;
                }
            }
        }

        for (int k=0; k<m; k++) {
            if (ones[k] > n/2) {
                std::cout << 1;
            } else {
                std::cout << 0;
            }
        }

        ones.clear();
        std::cout << std::endl;
    }
}