#include <iostream>
#include <map>
#include <vector>

int main() {
    std::map<int, std::vector<std::vector<int>>> pieceMap = {
        {1, {{0}, {0, 0, 0, 0}}}, 
        {2, {{0, 0}}},
        {3, {{0, 0, 1}, {0, -1}}},
        {4, {{0, -1, 0}, {0, 1}}},
        {5, {{0, 0, 0}, {0, 1}, {0, -1}, {0, -1, 1}}},
        {6, {{0, 0, 0}, {0, 0}, {0, 1, 0}, {0, -2}}},
        {7, {{0, 0, 0}, {0, 0}, {0, 2}, {0, 0, -1}}}
    };

    int c, p;
    std::cin >> c >> p;

    int currCol;
    std::vector<int> field;
    for (int i=0; i<c; i++) {
        std::cin >> currCol;
        field.push_back(currCol);
    }

    std::vector<std::vector<int>> rotations = pieceMap[p];
    int ans = 0;
    for (int i=0; i<c; i++) {
        currCol = field[i];

        for (std::vector<int> piece: rotations) {
            if (i + piece.size() > c) {
                continue;
            }

            for (int j=1; j<piece.size(); j++) {
                if (field[i+j] - currCol != piece[j]) {
                    ans--;
                    break;
                }

                currCol = field[i+j];
            }

            ans++;
            currCol = field[i];
        }
    }

    std::cout << ans;
}