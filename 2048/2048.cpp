#include <iostream>
#include <string>
#include <vector>

void rotateCcw(std::vector<std::vector<int>>& grid, int rotations) {
    for (int i=0; i<rotations; i++) {
        // grid has 2 layers
        for (int j=0; j<2; j++) {
            int a = j, b = j, c = 3-j, d = 3-j;

            // outer layer requires 3 sets of shifts (corners and each 2 elements beside the corners)
            // inner layer requires 1 set of shifts (corners)
            for (int k=0; k<3-(2*j); k++) {
                int temp = grid[a][b];
                grid[a][b] = grid[b][c];
                grid[b][c] = grid[c][d];
                grid[c][d] = grid[d][a];
                grid[d][a] = temp;
                b++;
                d--;
            }
        }
    }
}

void shiftLeft(std::vector<std::vector<int>>& grid) {
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            for (int k=j+1; k<4; k++) {
                if (grid[i][k] == 0) { // keep looking
                    continue;
                } else if (grid[i][j] == grid[i][k]) { // combine
                    grid[i][j] *= 2;
                    grid[i][k] = 0;
                    break;
                } else if (grid[i][j] == 0) { // fill left
                    grid[i][j] = grid[i][k];
                    grid[i][k] = 0;
                } else { // cannot move
                    break;
                }
            }
        }
    }
}

int main() {
    int num;
    std::vector<std::vector<int>> grid(4, std::vector<int>(4));

    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            std::cin >> num;
            grid[i][j] = num;
        }
    }

    std::cin >> num;

    // rotate to have shift left as the frame of reference
    // then perform the shift and rotate back to original frame of reference
    rotateCcw(grid, num);
    shiftLeft(grid);
    rotateCcw(grid, (4 - num) % 4);

    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }
}