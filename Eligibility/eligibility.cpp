#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::string name, input, output;
    int start, birth, courses;

    for (int i=0; i<n; i++) {
        std::cin >> name;
        std::cin >> input;
        start = std::stoi(input.substr(0, 4));
        std::cin >> input;
        birth = std::stoi(input.substr(0, 4));
        std::cin >> courses;

        output = "ineligible";
        if (start >= 2010 || birth >= 1991) {
            output = "eligible";
        } else if (courses < 41) {
            output = "coach petitions";
        }

        std::cout << name << " " << output << std::endl;
    }

    return 0;
}