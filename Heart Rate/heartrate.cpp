#include <iostream>
#include <string>

int main() {
    std::string input;
    getline(std::cin, input);
    int n = stoi(input);

    int b;
    double p;
    double bpm;
    for (int i=0; i<n; i++) {
        getline(std::cin, input, ' ');
        b = stoi(input);
        getline(std::cin, input);
        p = stod(input);

        bpm = 60 * (b-1) / p;
        std::cout << bpm;
        bpm = 60 * b / p;
        std::cout << " " << bpm;
        bpm = 60 * (b+1) / p;
        std::cout << " " << bpm << std::endl;
    }

    return 0;
}