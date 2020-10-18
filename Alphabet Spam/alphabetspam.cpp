#include <iomanip>
#include <iostream>
#include <string>

int main() {
    double ws=0, lc=0, uc=0, sym=0;
    std::string input;
    std::getline(std::cin, input);

    for (int i=0; i<input.length(); i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            lc++;
        } else if (input[i] >= 'A' && input[i] <= 'Z') {
            uc++;
        } else if (input[i] == '_') {
            ws++;
        } else {
            sym++;
        }
    }
    ws /= input.length();
    lc /= input.length();
    uc /= input.length();
    sym /= input.length();

    std::cout.precision(15);
    std::cout << ws << std::endl;
    std::cout << lc << std::endl;
    std::cout << uc << std::endl;
    std::cout << sym << std::endl;
    
    return 0;
}