#include <cmath>
#include <iostream>
#include <vector>

int main() {
    int t, n;
    std::cin >> t;
    int vote;
    std::vector<int> votes;

    for (int i=0; i<t; i++) {
        std::cin >> n;
        votes.clear();

        int total = 0;
        int winVotes = 0;
        for (int j=0; j<n; j++) {
            std::cin >> vote;
            winVotes = std::max(winVotes, vote);
            total += vote;
            votes.push_back(vote);
        }

        int winner = -1;
        bool noWinner = false;
        for (int j=0; j<n; j++) {
            if (votes[j] == winVotes) {
                if (winner != -1) {
                    std::cout << "no winner" << std::endl;
                    noWinner = true;
                    break;
                } else {
                    winner = j;
                }
            }
        }

        if (noWinner) {
            continue;
        }

        if (winVotes*2 > total) {
            std::cout << "majority winner " << winner+1 << std::endl;
        } else {
            std::cout << "minority winner " << winner+1 << std::endl;
        }
    }
}