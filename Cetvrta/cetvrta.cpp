#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>

int main() {
    std::string input;
    std::unordered_map<int, int> mapx;
    std::unordered_map<int, int> mapy;
    int x, y;

    for (int i=0; i<3; i++) {
        std::getline(std::cin, input, ' ');
        mapx[stoi(input)]++;
        std::getline(std::cin, input);
        mapy[stoi(input)]++;
    }

    for (std::pair<int, int> p:mapx) {
        if (p.second == 1) {
            x = p.first;
        }
    }
    for (std::pair<int, int> p:mapy) {
        if (p.second == 1) {
            y = p.first;
        }
    }

    std::cout << x << " " << y << std::endl;
     
    return 0;
}