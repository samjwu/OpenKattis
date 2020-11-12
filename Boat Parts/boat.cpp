#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    int p, n;
    std::string part;
    std::unordered_set<std::string> parts;

    std::cin >> p >> n;
    for (int i=0; i<n; i++) {
        std::cin >> part;
        parts.insert(part);
        if (parts.size() == p) {
            std::cout << i+1 << std::endl;
            return 0;
        }
    }

    std::cout << "paradox avoided" << std::endl;

    return 0;
}