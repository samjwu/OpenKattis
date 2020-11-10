#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::unordered_map<char, int> position;
    for (int i=0; i<26; i++) {
        position['A'+i] = i;
    }
    position[' '] = 26;
    position['\''] = 27;

    int n = std::stoi(input);
    for (int i=0; i<n; i++) {
        std::getline(std::cin, input);
        double ans = 0;
        int currpos = position[input[0]];
        for (int j=1; j<input.length(); j++) {
            int move1 = std::abs(currpos - position[input[j]]);
            int move2 = std::abs(28 - move1);
            ans += std::min(move1, move2);
            currpos = position[input[j]];
        }
        ans = ans * M_PI / 7 + input.length();
        std::cout << std::setprecision(10) << std::fixed << ans << std::endl;
    }

    return 0;
}