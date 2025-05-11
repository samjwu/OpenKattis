#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    size_t idx = s.find("kth");

    if (idx != -1) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
