#include <iostream>
#include <string>
#include <vector>

bool IsLocation(int x, int y, std::vector<std::string>& v, int r, int c) {
    for (int i = x-1; i < x+2; i++) {
        for (int j = y-1; j < y+2; j++) {
            if (i == x && j == y) {
                continue;
            }

            if (i < 0 || j < 0 || i >= r || j >= c || v[i][j] != 'O') {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int r, c;
    std::cin >> r >> c;

    std::string s;
    std::vector<std::string> v;
    for (int i = 0; i < r; i++) {
        std::cin >> s;
        v.push_back(s);
    }

    int locations = 0;
    int x = -1, y = -1;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (v[i][j] == '0' && IsLocation(i, j, v, r, c)) {
                locations += 1;
                x = i;
                y = j;
            }
        }
    }

    if (locations == 0) {
        std::cout << "Oh no!";
    } else if (locations == 1) {
        std::cout << x+1 << ' ' << y+1;
    } else {
        std::cout << "Oh no! " << locations << " locations";
    }
}
