#include <iostream>
#include <string>

int main() {
    bool foundGoodRestaurant = false;

    int n, k;
    std::string line, name;

    std::getline(std::cin, line);
    n = std::stoi(line);

    for (int i=0; i<n; i++) {
        std::getline(std::cin, line);
        std::getline(std::cin, name);
        k = std::stoi(line);
        bool hasSoup = false, hasCake = false;

        for (int j=0; j<k; j++) {
            std::getline(std::cin, line);
            if (line.compare("pea soup") == 0) {
                hasSoup = true;
            }
            if (line.compare("pancakes") == 0) {
                hasCake = true;
            }
        }

        if (hasSoup && hasCake && !foundGoodRestaurant) {
            foundGoodRestaurant = true;
            std::cout << name << std::endl;
        }
    }

    if (!foundGoodRestaurant) {
        std::cout << "Anywhere is fine I guess";
    }
}