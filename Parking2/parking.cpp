#include <climits>
#include <iostream>
#include <string>

int main() {
    std::string input;
    getline(std::cin, input);
    int t = stoi(input);
    for (int i=0; i<t; i++) {
        getline(std::cin, input);
        int n = stoi(input);
        int min = INT_MAX;
        int max = INT_MIN;
        for (int j=0; j<n-1; j++) {
            getline(std::cin, input, ' ');
            if (stoi(input) < min) {
                min = stoi(input);
            }
            if (stoi(input) > max) {
                max = stoi(input);
            }
        }
        getline(std::cin, input);
        if (stoi(input) < min) {
            min = stoi(input);
        }
        if (stoi(input) > max) {
            max = stoi(input);
        }
        std::cout << 2*(max-min) << std::endl;
    }
    
    return 0;
}