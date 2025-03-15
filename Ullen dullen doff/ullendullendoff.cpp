#include <iostream>
#include <string>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::string s;
    std::vector<std::string> names;

    for (int i = 0; i < n; i++) {
        std::cin >> s;
        names.push_back(s);
    }

    int chosenIndex = 12 % n;
    std::cout << names[chosenIndex] << std::endl;
}
