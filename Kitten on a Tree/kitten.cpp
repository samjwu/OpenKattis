#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<int, int> map; // map branches b to roots a
    int k, a, b;
    std::string line, s;

    std::getline(std::cin, line);
    k = std::stoi(line);

    while (a != -1) {
        std::getline(std::cin, line);
        std::stringstream ss(line);

        ss >> s;
        a = std::stoi(s);
        if (a == -1) {
            break;
        }

        while (ss >> s) {
            b = std::stoi(s);
            map[b] = a;
        }
    }

    while (k != 0) {
        std::cout << k << " ";
        k = map[k];
    }
}