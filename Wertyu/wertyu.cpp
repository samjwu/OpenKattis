#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<char, char> left = {
        {'1','`'},
        {'2','1'},
        {'3','2'},
        {'4','3'},
        {'5','4'},
        {'6','5'},
        {'7','6'},
        {'8','7'},
        {'9','8'},
        {'0','9'},
        {'-','0'},
        {'=','-'},
        {'W','Q'},
        {'E','W'},
        {'R','E'},
        {'T','R'},
        {'Y','T'},
        {'U','Y'},
        {'I','U'},
        {'O','I'},
        {'P','O'},
        {'[','P'},
        {']','['},
        {'\\',']'},
        {'S','A'},
        {'D','S'},
        {'F','D'},
        {'G','F'},
        {'H','G'},
        {'J','H'},
        {'K','J'},
        {'L','K'},
        {';','L'},
        {'\'',';'},
        {'X','Z'},
        {'C','X'},
        {'V','C'},
        {'B','V'},
        {'N','B'},
        {'M','N'},
        {',','M'},
        {'.',','},
        {'/','.'},
        {' ',' '}
    };

    std::string s;
    while (std::getline(std::cin, s)) {
        for (char c : s) {
            std::cout << left[c];
        }
        std::cout << std::endl;
    }
}