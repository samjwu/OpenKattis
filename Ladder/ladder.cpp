#include <cmath>
#include <iostream>
#include <string>

int main() {
    std::string input;
    double h, v, ans;

    std::getline(std::cin, input, ' ');
    h = stod(input);
    std::getline(std::cin, input);
    v = stod(input);
    v = v * M_PI / 180;

    ans = std::ceil(h / std::sin(v));

    std::cout << ans << std::endl;
     
    return 0;
}