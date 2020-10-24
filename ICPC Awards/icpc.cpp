#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    std::string input;
    std::getline(std::cin, input);
    int n = std::stoi(input);

    int i = 0;
    std::string university, team;
    std::unordered_set<std::string> universities;
    while (i < n && universities.size() < 12) {
        std::cin >> university >> team;
        if (universities.find(university) == universities.end()) {
            universities.insert(university);
            std::cout << university + " " + team << std::endl;
        }
        i++;
    }

    return 0;
}