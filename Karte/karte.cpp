#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

int main() {
    std::string input;
    std::getline(std::cin , input);

    std::unordered_map<char, int> deck = {{'P', 13}, {'K', 13}, {'H', 13}, {'T', 13}};
    std::unordered_set<std::string> hand;
    bool greska = false;

    for (int i=0; i<input.length(); i+=3) {
        std::string card = input.substr(i, 3);
        if (hand.count(card) > 0) {
            std::cout << "GRESKA" << std::endl;
            greska = true;
            break;
        }
        hand.insert(card);
        deck[card[0]]--;
    }

    if (!greska) {
        std::cout << deck['P'] << ' ' << deck['K'] << ' ' << deck['H'] << ' ' << deck['T'] << std::endl;
    }

    return 0;
}