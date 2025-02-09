#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::string desc;
    int k;
    int budget = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> desc >> k;
        budget += k;
    }

    if (budget > 0) {
        std::cout << "Usch, vinst";
    } else if (budget == 0) {
        std::cout << "Lagom";
    } else {
        std::cout << "Nekad";
    }
}
