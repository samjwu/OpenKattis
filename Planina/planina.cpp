#include <cmath>
#include <iostream>
#include <string>

int main() {
    std::string input;
    getline(std::cin, input);
    
    int n = stoi(input);
    int num_squares = 1;
    int box_len = 1;
    int ans = 4;
    for (int i=0; i<n; i++) {
        ans += ((box_len+1) * box_len * 2) + num_squares;
        num_squares *= 4;
        box_len = pow(2, i+1);
    }
    
    std::cout << ans << std::endl;

    return 0;
}