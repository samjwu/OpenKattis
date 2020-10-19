#include <iostream>

int main() {
    std::string line;
    int r, c;
    int ans[5] = {0};
    char grid[51][51];
    
    std::getline(std::cin, line, ' ');
    r = std::stoi(line);
    std::getline(std::cin, line);
    c = std::stoi(line);

    for (int i=0; i<r; i++) {
        std::getline(std::cin, line);
        for (int j=0; j<c; j++) {
            grid[i][j] = line[j];
        }
    }

    int squish = 0;
    bool open = true;
    for (int i=0; i<r-1; i++) {
        for (int j=0; j<c-1; j++) {
            open = true;
            squish = 0;
            for (int k=i; k<i+2; k++) {
                for (int l=j; l<j+2; l++) {
                    if (grid[k][l] == '#') {
                        open = false;
                    } else if (grid[k][l] == 'X') {
                        squish++;
                    } else {
                        continue;
                    }
                }
            }
            if (open == true) {
                switch (squish) {
                    case 0:
                        ans[0]++;
                        break;
                    case 1:
                        ans[1]++;
                        break;
                    case 2:
                        ans[2]++;
                        break;
                    case 3:
                        ans[3]++;
                        break;
                    case 4:
                        ans[4]++;
                        break;
                }
            }
        }
    }

    for (int i=0; i<5; i++) {
        std::cout << ans[i] << std::endl;
    }
    
    return 0;
}