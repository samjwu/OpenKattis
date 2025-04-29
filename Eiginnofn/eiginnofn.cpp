#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore();

    // map first name to second name if it exists
    std::unordered_map<std::string, std::string> nameMap;

    for (int i = 0; i < n; ++i) {
        std::string firstName, secondName;
        std::cin >> firstName;

        if (std::cin.peek() != '\n') {
            std::cin >> secondName;
            nameMap[firstName] = secondName;
        } else {
            nameMap[firstName] = "";
        }
        std::cin.ignore();
    }

    int m;
    std::cin >> m;
    std::cin.ignore();

    for (int i = 0; i < m; ++i) {
        std::string query;
        std::getline(std::cin, query);

        if (nameMap.find(query) != nameMap.end()) {
            // found someone
            if (nameMap[query].empty()) {
                // one name
                std::cout << "Jebb" << std::endl;
            } else {
                // two names
                std::cout << "Neibb en " << query << " " << nameMap[query] << " er heima" << std::endl;
            }
        } else {
            // not found
            std::cout << "Neibb" << std::endl;
        }
    }

    return 0;
}
