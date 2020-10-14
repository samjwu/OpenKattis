#include <iostream>
#include <string>

int main() {
    std::string input;

    std::getline(std::cin, input, ' ');
    int articles = stoi(input);

    std::getline(std::cin, input);
    int impact = stoi(input);

    int bribes;
    if (articles == 1 || impact == 1) {
        bribes = articles * impact;
    } else {
        bribes = articles * (impact-1) + 1;
    }
    
    std::cout << bribes << std::endl;

    return 0;
}