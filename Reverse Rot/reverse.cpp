#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string rot = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
    
    int n;
    std::string input;

    std::cin >> n >> input;
    while (n != 0) {
        std::reverse(input.begin(), input.end());
        for (int i=0; i<input.length(); i++) {
            int rotation = input[i] + n;
            if (input[i] == '.') {
                rotation = (rotation - '.' + 27) % 28;
            } else if (input[i] == '_') {
                rotation = (rotation - '_' + 26) % 28;
            } else {
                rotation = (rotation - 'A') % 28;
            }
            input[i] = rot[rotation];
        }

        std::cout << input << std::endl;
        std::cin >> n >> input;
    }
}