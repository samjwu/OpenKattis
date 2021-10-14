#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::string s;
    for (int i=0; i<n; i++) {
        std::cin >> s;
        if (i % 2 == 0) {
            std::cout << s << std::endl;
        }
    }
}