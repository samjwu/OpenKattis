#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <set>
#include <vector>

std::string doJump(std::string loc, std::vector<int> jump) {
    std::string nextLoc;

    int col = loc[0] - 'a';
    int row = loc[1] - '1';
    int nextCol = col + jump[0];
    int nextRow = row + jump[1];

    if (nextCol < 0 || nextCol > 7 || nextRow < 0 || nextRow > 7) {
        return "invalid";
    }

    nextLoc.push_back(nextCol + 'a');
    nextLoc.push_back(nextRow + '1');

    return nextLoc;
}

std::pair<int, std::vector<std::string>> findPlaces(std::string loc) {
    std::vector<std::vector<int>> jumps = {
        {-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, 2}, {1, -2}, {2, 1}, {2, -1}
    };
    int numJumps = 0;
    std::vector<std::string> places;
    std::set<std::string> visited;
    std::queue<std::string> q;

    visited.insert(loc);
    q.push(loc);

    while (!q.empty()) {
        int n = q.size();

        if (visited.size() == 64) {
            for (int i=0; i<n; i++) {
                places.push_back(q.front());
                q.pop();
            }
            break;
        }

        numJumps++;

        for (int i=0; i<n; i++) {
            std::string currLoc = q.front();
            q.pop();

            for (std::vector<int> jump: jumps) {
                std::string nextLoc = doJump(currLoc, jump);
                if (nextLoc.compare("invalid") != 0 && visited.count(nextLoc) == 0) {
                    visited.insert(nextLoc);
                    q.push(nextLoc);
                }
            }   
        }        
    }

    return {numJumps, places};
}

int main() {
    int n;
    std::string loc;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> loc;
        std::pair<int, std::vector<std::string>> jumpInfo = findPlaces(loc);
        int numJumps = jumpInfo.first;
        std::vector<std::string> places = jumpInfo.second;

        std::sort(places.begin(), places.end(), [](std::string s1, std::string s2) {
            if (s1[1] == s2[1]) {
                return s1[0] < s2[0];    
            }
            return s1[1] > s2[1];
        });
        
        std::cout << numJumps << " ";
        for (std::string place: places) {
            std::cout << place << " ";
        }
        std::cout << std::endl;
    }
}