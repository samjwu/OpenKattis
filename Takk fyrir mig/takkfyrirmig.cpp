#include <iostream>
#include <string>

int main() {
    int n;
    std::string name;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> name;
        std::cout << "Takk " + name << std::endl;
    }
}
