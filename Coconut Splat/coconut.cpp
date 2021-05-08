#include <iostream>
#include <vector>

bool check(int& syl, int s, std::vector<int>& players, int& hands, int& idx, int n) {
    if (syl % s == 0) {
        if (players[idx] == 3) {
            players[idx] = 2;
            players[(idx+1) % (2*n)] = 2;
            hands++;
            idx = (idx-1 + 2*n) % (2*n);
        } else {
            players[idx]--;
            if (players[idx] == 0) {
                hands--;
            }
        }

        syl = 0;
        return true;
    }
    return false;
}

int main() {
    int s, n;
    std::cin >> s >> n;

    // states: 3=folded, 2=fist, 1=palm, 0=out
    std::vector<int> players(2*n);
    for (int i=0; i<2*n; i++) {
        if (i%2 == 0) {
            players[i] = 3;
        }
    }

    int hands = n;
    int syl = 0;
    int idx = -1;

    while (hands > 1) {
        idx = (idx+1) % (2*n);
        
        if (players[idx] == 0) {
            continue;
        } else {
            syl++;
            check(syl, s, players, hands, idx, n);
        }
    }

    for (int i=0; i<2*n; i++) {
        // std::cout << players[i]  << std::endl;
        if (players[i] > 0) {
            std::cout << i/2 + 1 << std::endl;
        }
    }
    
    return 0;
}