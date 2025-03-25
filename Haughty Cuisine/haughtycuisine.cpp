#include <iostream>
#include <string>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    int d;
    std::string s;

    std::cin >> d;
    std::cout << d << std::endl;

    for (int i = 0; i < d; i++) {
        std::cin >> s;
        std::cout << s << std::endl;
    }
}
