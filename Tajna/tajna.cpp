#include <cmath>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string s;
    std::cin >> s;

    int l = s.length();
    int r = (int) std::floor(std::sqrt((double) l));
    int c;
    for (int i=r; i>=1; i--) {
        if (l % i == 0) {
            r = i;
            c = l / i;
            break;
        }
    }

    std::vector<std::vector<char>> mat(r, std::vector<char>(c));
    int currR = 0, currC = 0;
    for (int i=0; i<l; i++) {
        mat[currR][currC] = s[i];
        currR++;
        if (currR == r) {
            currR = 0;
            currC++;
        }
    }

    std::string ans;
    currR = 0, currC = 0;
    for (int i=0; i<l; i++) {
        ans.push_back(mat[currR][currC]);
        
        currC++;
        if (currC == c) {
            currC = 0;
            currR++;
        }
    }

    std::cout << ans;
}