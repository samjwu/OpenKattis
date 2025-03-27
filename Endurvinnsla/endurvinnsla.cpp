#include <iostream>
#include <string>

int main() {
    std::string s;
    double p;
    int n;
    int plastic = 0;

    std::getline(std::cin, s);
    std::getline(std::cin, s);
    p = std::stod(s);
    std::getline(std::cin, s);
    n = std::stoi(s);

    for (int i = 0; i < n; i++) {
        std::getline(std::cin, s);
        if (s.compare("plast") == 0) {
            plastic++;
        }
    }

    double percent = static_cast<double>(plastic) / n;
    if (percent >= 1 - p) {
        std::cout << "Jebb";
    } else {
        std::cout << "Neibb";
    }
}
