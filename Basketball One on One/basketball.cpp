#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cin >> input;
    
    int a = 0, b = 0;
    char winner;

    for (int i=0; i<input.length(); i+=2) {
        if (input[i] == 'A') {
            a += input[i+1] - '0';
        } else {
            b += input[i+1] - '0';
        }

        if ((a >= 11 || b >= 11) && (a > b+1 || b > a+1)) {
            if (a > b) {
                winner = 'A';
            } else {
                winner = 'B';
            }
            break;
        }
    }

    std::cout << winner << std::endl;
}