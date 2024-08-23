#include <iostream>
#include <string>

int main() {
    std::string dna;
    std::cin >> dna;
    
    if (dna.find("COV") != -1) {
        std::cout << "Veikur!" << std::endl;
    } else {
        std::cout << "Ekki veikur!" << std::endl;
    }
}
