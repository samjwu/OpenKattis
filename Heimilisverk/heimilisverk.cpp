#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    std::string s;
    std::getline(std::cin, s);

    int n = std::stoi(s);
    std::unordered_set<std::string> seen;

    for (int i = 0; i < n; ++i) {
        std::getline(std::cin, s);

        if (seen.find(s) == seen.end()) {
            std::cout << s << std::endl;
            seen.insert(s);
        }
    }

    return 0;
}
