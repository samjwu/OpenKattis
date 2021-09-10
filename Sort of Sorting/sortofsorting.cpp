#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    int n;
    std::string name;
    std::vector<std::string> names;

    while (true) {
        std::cin >> n;

        if (n == 0) {
            break;
        }

        for (int i=0; i<n; i++) {
            std::cin >> name;
            names.push_back(name);
        }

        std::stable_sort(names.begin(), names.end(), [](std::string name1, std::string name2) {
            if (name1[0] == name2[0]) {
                return name1[1] < name2[1];
            }
            return name1[0] < name2[0];
        });

        for (int i=0; i<n; i++) {
            std::cout << names[i] << std::endl;
        }

        std::cout << std::endl;
        names.clear();
    }
}