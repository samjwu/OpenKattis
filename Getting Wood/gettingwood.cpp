#include <iostream>
#include <string>

int main() {
    std::string s;

    std::getline(std::cin, s);

    std::size_t idx = s.find("tree");

    if (idx != std::string::npos) {
        std::cout << idx << std::endl;
    } else {
        std::cout << "no trees here" << std::endl;
    }

    return 0;
}
