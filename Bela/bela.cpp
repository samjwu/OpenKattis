#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>

int main() {
    std::string input;
    std::getline(std::cin, input);

    int n = input.length();
    char input_arr[n+1];
    strcpy(input_arr, input.c_str());

    int hands = atoi(strtok(input_arr, " "));
    char* dominant_suit = strtok(NULL, "\n");

    std::unordered_map<char, int> point_dict = {
        {'A', 11},
        {'K', 4},
        {'Q', 3},
        {'J', 2},
        {'T', 10},
        {'9', 0},
        {'8', 0},
        {'7', 0}
    };

    int points = 0;
    for (int i=0; i<hands*4; i++) {
        std::getline(std::cin, input);
        switch (input[0]) {
            case 'J':
                if (input[1] == *dominant_suit) {
                    points += 20;
                } else {
                    points += point_dict[input[0]];
                }
                continue;
            case '9':
                if (input[1] == *dominant_suit) {
                    points += 14;
                } else {
                    points += point_dict[input[0]];
                }
                continue;
            default:
                points += point_dict[input[0]];
        }
    }

    std::cout << points << std::endl;

    return 0;
}