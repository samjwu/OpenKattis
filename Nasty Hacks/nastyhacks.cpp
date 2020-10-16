#include <iostream>
#include <string>

int main() {
    std::string input;
    getline(std::cin, input);
    int n = stoi(input);

    int r, e, c;
    for (int i=0; i<n; i++) {
        getline(std::cin, input, ' ');
        r = stoi(input);
        getline(std::cin, input, ' ');
        e = stoi(input);
        getline(std::cin, input);
        c = stoi(input);
        if (e-c > r) {
            std::cout << "advertise" << std::endl;
        } else if (e-c == r) {
            std::cout << "does not matter" << std::endl;
        } else {
            std::cout << "do not advertise" << std::endl;
        }
    }

    return 0;
}