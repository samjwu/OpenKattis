#include <iostream>
#include <string>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::string s;
    
    for (int i = 0; i < n; i++) {
        std::cin >> s;

        for (int j = 0; j < m; j++) {
            if (s[j] != '.') {
                std::cout << s[j];
            }
        }
    }
}
