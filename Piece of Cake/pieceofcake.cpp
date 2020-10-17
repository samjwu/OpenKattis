#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string input;
    getline(std::cin, input, ' ');
    int n = stoi(input);
    getline(std::cin, input, ' ');
    int h = stoi(input);
    getline(std::cin, input);
    int v = stoi(input);

    int vol = 4 * std::max(h, n-h) * std::max(v, n-v);
    
    std::cout << vol << std::endl;

    return 0;
}