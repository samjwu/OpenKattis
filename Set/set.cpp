#include <iostream>
#include <vector>
#include <string>

bool isSet(std::string card1, std::string card2, std::string card3) {
    int same = 0;
    int pairwiseDiff = 0;

    for (int i=0; i<4; i++) {
        if (card1[i] == card2[i] && card2[i] == card3[i]) {
            same++;
        }

        if (card1[i] != card2[i] && card2[i] != card3[i] && card1[i] != card3[i]) {
            pairwiseDiff++;
        }
    }

    return pairwiseDiff + same == 4;
}

int main() {
    std::vector<std::string> ans, cards;
    std::string card;

    for (int i=0; i<12; i++) {
        std::cin >> card;
        cards.push_back(card);
    }

    for (int i=0; i<10; i++) {
        for (int j=i+1; j<11; j++) {
            for (int k=j+1; k<12; k++) {
                if (isSet(cards[i], cards[j], cards[k])) {
                    ans.push_back(std::to_string(i+1) + ' ' + std::to_string(j+1) + ' ' + std::to_string(k+1));
                }
            }
        }
    }

    if (ans.size() == 0) {
        std::cout << "no sets" << std::endl;
    } else {
        for (auto ansSet: ans) {
            std::cout << ansSet << std::endl;
        }
    }
}