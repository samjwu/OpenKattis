#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

int main() {
    int dig;
    std::vector<std::vector<int>> grid(3, std::vector<int>(3));
    std::vector<int> loc(2);
    
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            std::cin >> dig;
            grid[i][j] = dig;
    
            if (dig == 1) {
                loc[0] = i;
                loc[1] = j;
            }
        }
    }

    double dist = 0;
    int curr = 1;

    while (curr != 9) {
        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                if (grid[i][j] == curr + 1) {
                    dist += std::sqrt(abs(loc[0] - i)*abs(loc[0] - i) + abs(loc[1] - j)*abs(loc[1] - j));
                    loc[0] = i;
                    loc[1] = j;
                    curr++;
                }
            }
        }
    }

    std::printf("%.10f", dist);
}