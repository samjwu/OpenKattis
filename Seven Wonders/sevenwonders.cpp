#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string input;
    getline(std::cin, input);

    std::unordered_map<char, int> count;
    for (int i=0; i<input.length(); i++) {
        count[input[i]]++;
    }

    int points = std::pow(count['C'], 2) + std::pow(count['G'], 2) + std::pow(count['T'], 2)\
                 + 7 * std::min(count['C'], std::min(count['G'], count['T']));

    std::cout << points << std::endl;

    return 0;
}