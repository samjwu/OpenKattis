#include <iostream>
#include <string>
#include <vector>

std::vector<int> findEntrance(std::vector<std::string>& house, int w, int l) {
    for (int i=0; i<l; i++) {
        for (int j=0; j<w; j++) {
            if (house[i][j] == '*') {
                return {i, j};
            }
        }
    }
    
    return {-1, -1};
}

std::vector<int> findExit(std::vector<std::string>& house, int w, int l) {
    std::vector<int> entrance = findEntrance(house, w, l);
    std::vector<std::vector<int>> dirs = {
        {1, 0}, {-1, 0}, {0, 1}, {0, -1}
    };
    int dir; 

    if (entrance[0] == 0) {
        dir = 0;
    } else if (entrance[1] == 0) {
        dir = 2;
    } else if (entrance[0] == l-1) {
        dir = 1;
    } else {
        dir = 3;
    }

    entrance[0] += dirs[dir][0];
    entrance[1] += dirs[dir][1];
    while (entrance[0] != 0 && entrance[1] != 0 && entrance[0] != l-1 && entrance[1] != w-1) {
        int x = entrance[0];
        int y = entrance[1];
        
        if (house[x][y] == '/') {
            switch (dir) {
                case 0:
                    dir = 3;
                    break;
                case 1:
                    dir = 2;
                    break;
                case 2:
                    dir = 1;
                    break;
                case 3:
                    dir = 0;
                    break;
            }
        } else if (house[x][y] == '\\') {
            switch (dir) {
                case 0:
                    dir = 2;
                    break;
                case 1:
                    dir = 3;
                    break;
                case 2:
                    dir = 0;
                    break;
                case 3:
                    dir = 1;
                    break;
            }
        }
        
        entrance[0] += dirs[dir][0];
        entrance[1] += dirs[dir][1];
    }

    return entrance;
}

int main() {
    int t = 1;
    int w, l;
    std::string line;
    std::vector<std::string> house;
    
    while (true) {
        std::cin >> w >> l;

        if (w == 0 && l == 0) {
            break;
        }

        for (int i=0; i<l; i++) {
            std::cin >> line;
            house.push_back(line);
        }

        std::vector<int> exit = findExit(house, w, l);
        house[exit[0]][exit[1]] = '&';
        
        std::cout << "HOUSE " << t++ << std::endl;
        for (int i=0; i<l; i++) {
            std::cout << house[i] << std::endl;
        }

        house.clear();
    }
}