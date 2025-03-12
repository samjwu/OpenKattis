#include <iostream>

int main() {
    double n;
    std::cin >> n;

    if (n >= 0 && n <= 0.2) {
        std::cout << "Logn";
    } else if (n >= 0.3 && n <= 1.5) {
        std::cout << "Andvari";
    } else if (n >= 1.6 && n <= 3.3) {
        std::cout << "Kul";
    } else if (n >= 3.4 && n <= 5.4) {
        std::cout << "Gola";
    } else if (n >= 5.5 && n <= 7.9) {
        std::cout << "Stinningsgola";
    } else if (n >= 8.0 && n <= 10.7) {
        std::cout << "Kaldi";
    } else if (n >= 10.8 && n <= 13.8) {
        std::cout << "Stinningskaldi";
    } else if (n >= 13.9 && n <= 17.1) {
        std::cout << "Allhvass vindur";
    } else if (n >= 17.2 && n <= 20.7) {
        std::cout << "Hvassvidri";
    } else if (n >= 20.8 && n <= 24.4) {
        std::cout << "Stormur";
    } else if (n >= 24.5 && n <= 28.4) {
        std::cout << "Rok";
    } else if (n >= 28.5 && n <= 32.6) {
        std::cout << "Ofsavedur";
    } else if (n >= 32.7) {
        std::cout << "Farvidri";
    }    
}
