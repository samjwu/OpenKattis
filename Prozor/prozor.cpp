#include <cmath>
#include <iostream>
#include <string>
#include <vector>

int main() {
    int r, s, k;
    std::cin >> r >> s >> k;

    std::string line;
    std::vector<std::string> window;
    for (int i=0; i<r; i++) {
        std::cin >> line;
        window.push_back(line);
    }

    int ans = 0;
    std::vector<int> place = {0, 0};
    for (int i=1; i<r-(k-2); i++) {
        for (int j=1; j<s-(k-2); j++) {
            int subans = 0;
            for (int m=i; m<i+(k-2); m++) {
                for (int n=j; n<j+(k-2); n++) {
                    if (window[m][n] == '*') {
                        subans++;
                    }
                }
            }
            if (subans > ans) {
                ans = subans;
                place = {i-1, j-1};
            }
        }
    }

    for (int i=place[0]+1; i<place[0]+k-1; i++) {
        window[i][place[1]] = '|';
        window[i][place[1] + (k-1)] = '|';
    }

    for (int j=place[1]+1; j<place[1]+k-1; j++) {
        window[place[0]][j] = '-';
        window[place[0] + (k-1)][j] = '-';
    }

    window[place[0]][place[1]] = '+';
    window[place[0] + (k-1)][place[1]] = '+';
    window[place[0]][place[1] + (k-1)] = '+';
    window[place[0] + (k-1)][place[1] + (k-1)] = '+';

    std::cout << ans << std::endl;
    for (int i=0; i<r; i++) {
        std::cout << window[i] << std::endl;
    }

    return 0;
}