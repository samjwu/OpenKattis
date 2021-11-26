#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string line;
    int totalStars = 0;

    while (std::getline(std::cin, line)) {
        if (line.length() == 0) {
            totalStars = 0;
            std::cout << std::endl;
            continue;
        }

        int len = line.length();
        int stars = std::count(line.begin(), line.end(), '*');

        std::cout << std::string(len - stars - totalStars, '.') << std::string(stars, '*') << std::string(totalStars, '.') << std::endl;

        totalStars += stars;
    }
}