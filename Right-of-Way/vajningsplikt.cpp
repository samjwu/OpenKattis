#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<std::string, int> dirs = {
        {"North", 0},
        {"East", 1},
        {"South", 2},
        {"West", 3},
    };
    std::string from, to, other;
    std::cin >> from >> to >> other;

    int going = dirs[from] - dirs[to];
    int approaching = dirs[from] - dirs[other];

    bool goStraight = going == 2 || going == -2;
    bool onRight = approaching == 1 || approaching == -3;
    bool goLeft = going == -1 || going == 3;
    bool onOpposite = approaching == 2 || approaching == -2;

    if ((goStraight && onRight) || (goLeft && (onRight || onOpposite))) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
}