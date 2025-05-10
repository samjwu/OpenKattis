#include <cmath>
#include <iostream>

int main() {
    int angle1, angle2;
    std::cin >> angle1 >> angle2;

    int diff = abs(angle1 - angle2);
    int rotation = std::min(diff, 360 - diff);

    std::cout << rotation << std::endl;

    return 0;
}
