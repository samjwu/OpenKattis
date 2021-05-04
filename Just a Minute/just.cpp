#include <iostream>

int main() {
    int n;
    double m, s;
    std::cin >> n;

    double minutes = 0, seconds = 0;

    for (int i=0; i<n; i++) {
        std::cin >> m >> s;
        minutes += m;
        seconds += s;
    }

    double avg = seconds / (minutes * 60);

    std::cout.precision(10);
    if (avg > 1) {
        std::cout << avg << std::endl;
    } else {
        std::cout << "measurement error" << std::endl;
    }

    return 0;
}