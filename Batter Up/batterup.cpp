#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string input;
    getline(std::cin, input);

    int num_bats = stoi(input);
    double bases = 0;
    double hits = 0; // guaranteed to be at least 1 at end of loop
    double percentage;
    for (int i=0; i<num_bats; i++) {
        getline(std::cin, input, ' ');
        if (stoi(input) >= 0) {
            bases += stoi(input);
            hits++;
        }
    }

    percentage = bases / hits;
    std::cout << percentage << std::endl;

    return 0;
}