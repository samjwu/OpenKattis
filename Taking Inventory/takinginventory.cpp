#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    int n, c;
    std::string s;
    std::unordered_map<std::string, int> inventory;

    std::cin >> n;

    for (int i = 0 ; i < n; ++i) {
        std::cin >> s >> c;

        if (inventory.find(s) != inventory.end()) {
            inventory[s] += c;
        } else {
            inventory[s] = c;
        }
    }

    for (std::pair<const std::string, int>& pair : inventory) {
        int stacks = std::ceil(static_cast<double>(pair.second) / 64);
        std::cout << pair.first << ' '  << stacks << std::endl;
    }

    return 0;
}
