#include <iostream>
#include <string>

int main() {
    std::string input;
    getline(std::cin, input);
    int years = stoi(input);
    
    double q, y;
    double qaly = 0;
    for (int i=0; i<years; i++) {
        getline(std::cin, input, ' ');
        q = stod(input);
        getline(std::cin, input);
        y = stod(input);
        qaly += q*y;
    }

    std::cout << qaly << std::endl;

    return 0;
}