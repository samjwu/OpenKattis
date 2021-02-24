#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cin >> input;

    int x = 0;
    int y = 0;
    int z = input.length();

    for (char c: input) {
        x *= 2;
        y *= 2;
 
        if (c == '1') {
            x++;
        } else if (c == '2') {
            y++;
        } else if (c == '3') {
            x++;
            y++;
        }
    }

    std::cout << z << ' ' << x << ' ' << y << std::endl;

    return 0;
}