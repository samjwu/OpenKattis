#include <iostream>

int main() {
    int s;
    std::cin >> s;

    int hours = s / 3600;
    int minutes = (s % 3600) / 60;
    int seconds = s % 60;

    std::cout << hours << " : " << minutes << " : " << seconds;
}
