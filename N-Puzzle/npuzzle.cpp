#include <cmath>
#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<char, int> position;
    for (char c='A'; c<='O'; c++) {
        position[c] = c-'A';
    }

    int dist = 0, goalX, goalY;

    std::string line;
    for (int i=0; i<4; i++) {
        std::cin >> line;
        for (int j=0; j<4; j++) {
            if (line[j] == '.') {
                continue;
            }
            goalX = position[line[j]] / 4;
            goalY = position[line[j]] % 4;
            dist += std::abs(i - goalX) + std::abs(j - goalY);
        }
    }

    std::cout << dist;
}