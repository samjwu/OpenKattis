#include <iostream>
#include <string>

int main() {
    int r, c, zr, zc;
    std::cin >> r >> c >> zr >> zc;

    std::string input;
    std::string output;
    for (int i=0; i<r; i++) {
        std::cin >> input;
        output.clear();

        for (int j=0; j<c; j++) {
            for (int count=0; count<zc; count++) {
                output.push_back(input[j]);
            }
        }

        for (int ir=0; ir<zr; ir++) {
            std::cout << output << std::endl;        
        }
    }

    return 0;
}