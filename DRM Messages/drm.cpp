#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    int half = input.length() / 2;

    int rotate1 = 0;
    int rotate2 = 0;
    for (int i=0; i<half; i++) {
        rotate1 += input[i] - 'A';
    }
    for (int i=half; i<half*2; i++) {
        rotate2 += input[i] - 'A';
    }

    // rotate1 %= 26;
    // rotate2 %= 26;
    for (int i=0; i<half; i++) {
        input[i] = (char) ((input[i] - 'A' + rotate1) % 26 + 'A');
    }
    for (int i=half; i<half*2; i++) {
        input[i] = (char) ((input[i] - 'A' + rotate2) % 26 + 'A');
    }

    for (int i=0; i<half; i++) {
        input[i] = (char) (input[i] - 'A' + input[i+half] - 'A') % 26 + 'A';
    }

    std::cout << input.substr(0, half) << std::endl;
     
    return 0;
}