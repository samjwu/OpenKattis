#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>

int main() {
    std::string input;

    getline(std::cin, input);
    double cost = stod(input);

    getline(std::cin, input);
    int lawns = stoi(input);

    double x, y;
    double area = 0;
    for (int i=0; i<lawns; i++) {
        getline(std::cin, input, ' ');
        x = stod(input);
        getline(std::cin, input, '\n');
        y = stod(input);
        area += x*y;
    }

    std::cout << std::setprecision(std::numeric_limits<double>::digits10) << cost*area << std::endl;

    return 0;
}