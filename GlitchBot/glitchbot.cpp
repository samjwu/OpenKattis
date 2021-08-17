#include <cmath>
#include <iostream>
#include <string>
#include <vector>

std::string prevMove(std::string move) {
    if (move == "Left") {
        return "Right";
    }
    if (move == "Right") {
        return "Forward";
    }
    else {
        return "Left";
    }
}

std::string nextMove(std::string move) {
    if (move == "Left") {
        return "Forward";
    }
    if (move == "Right") {
        return "Left";
    }
    else {
        return "Right";
    }
}

bool simulate(int targetX, int targetY, std::vector<std::string>& instructions) {
    int x = 0, y = 0;
    int direction = 0;
    
    for (int i=0; i<instructions.size(); i++) {
        if (instructions[i] == "Forward"){
            switch (direction) {
                case 0:
                    y++;
                    break;
                case 1:
                    x++;
                    break;
                case 2:
                    y--;
                    break;
                case 3:
                    x--;
                    break;
                default:
                    break;
            }
        } else if (instructions[i] == "Right") {
            direction = (direction + 1) % 4;
        } else {
            direction = (direction - 1 + 4) % 4;
        }
    }

    return x == targetX && y == targetY;
}

int main() {
    int x, y, n;
    std::string line;
    std::vector<std::string> instructions;
    std::cin >> x >> y;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> line;
        instructions.push_back(line);
    }

    for (int i=0; i<n; i++) {
        std::string wrong = instructions[i];
        
        instructions[i] = prevMove(wrong);
        if (simulate(x, y, instructions)) {
            std::cout << i+1 << " " << instructions[i] << std::endl;
            return 0;
        }

        instructions[i] = nextMove(wrong);
        if (simulate(x, y, instructions)) {
            std::cout << i+1 << " " << instructions[i] << std::endl;    
            return 0;
        }

        instructions[i] = wrong;
    }
}