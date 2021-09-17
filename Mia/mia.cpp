#include <algorithm>
#include <iostream>
#include <vector>

int calcScore(std::vector<int>& v) {
    if (v[0] == 1 && v[1] == 2) {
        return 1000;
    } else if (v[0] == v[1]) {
        return v[0] * 100;
    }
    return v[0] + v[1] * 10;
}

int main() {
    int s0, s1, r0, r1;

    while (std::cin >> s0 >> s1 >> r0 >> r1) {
        if (s0 == 0 && s1 == 0 && r0 == 0 && r1 == 0) {
            break;
        }

        std::vector<int> s = {s0, s1};
        std::vector<int> r = {r0, r1};

        std::sort(s.begin(), s.end());
        std::sort(r.begin(), r.end());

        int scoreS = calcScore(s);
        int scoreR = calcScore(r);

        if (scoreS == scoreR) {
            std::cout << "Tie." << std::endl;
        } else if (scoreS > scoreR) {
            std::cout << "Player 1 wins." << std::endl;
        } else {
            std::cout << "Player 2 wins." << std::endl;
        }
    }
}