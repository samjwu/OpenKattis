#include <iostream>
#include <string>

int main() {
    std::string name;
    int x;

    std::cin >> name >> x;

    for (int i = 0; i < x; i++) {
        std::cout << "Hipp hipp hurra, " + name + "!" << std::endl;
    }
}
