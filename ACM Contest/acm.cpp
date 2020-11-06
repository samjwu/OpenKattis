#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    int min;
    char question;
    std::string result;
    std::unordered_map<char, bool> solved;
    std::unordered_map<char, int> score_map;
    int num_solved = 0, score = 0;

    while (std::cin >> min && min != -1) {
        std::cin >> question >> result;
        if (solved[question] == false) {
            if (result == "wrong") {
                score_map[question] += 20;
            } else {
                score_map[question] += min;
                num_solved++;
                solved[question] = true;
            }
        }
    }

    for (auto pair:solved) {
        if (pair.second == true) {
            score += score_map[pair.first];
        }
    }

    std::cout << num_solved << " " << score << std::endl;
    
    return 0;
}