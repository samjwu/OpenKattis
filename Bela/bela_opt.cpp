#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>

int main() {
    std::string input;

    std::getline(std::cin, input, ' ');
    int hands = stoi(input);

    std::getline(std::cin, input);
    char dominant_suit = input[0];

    std::unordered_map<std::string, int> point_dict = {
        {"AS", 11}, {"AH", 11}, {"AD", 11}, {"AC", 11},
        {"KS", 4}, {"KH", 4}, {"KD", 4}, {"KC", 4},
        {"QS", 3}, {"QH", 3}, {"QD", 3}, {"QC", 3},
        {"JS", 2}, {"JH", 2}, {"JD", 2}, {"JC", 2},
        {"TS", 10}, {"TH", 10}, {"TD", 10}, {"TC", 10},
        {"9S", 0}, {"9H", 0}, {"9D", 0}, {"9C", 0},
        {"8S", 0}, {"8H", 0}, {"8D", 0}, {"8C", 0},
        {"7S", 0}, {"7H", 0}, {"7D", 0}, {"7C", 0}
    };
    std::string card = "J";
    card.push_back(dominant_suit);
    point_dict[card] = 20;
    card.replace(0, 1, "9");
    point_dict[card] = 14;

    int points = 0;
    for (int i=0; i<hands*4; i++) {
        std::getline(std::cin, input);
        points += point_dict[input];
    }

    std::cout << points << std::endl;

    return 0;
}