#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    int n;
    std::cin >> n;
    std::string name, loc;
    std::unordered_map<std::string, int> locations;

    for (int i = 0; i < n; i++) {
        std::cin >> name >> loc;
        if (locations.find(loc) == locations.end()) {
            locations[loc] = 1;
        } else {
            locations[loc] += 1;
        }
    }

    for (auto p: locations) {
        std::cout << p.first << " " << p.second << std::endl;
    }
}
