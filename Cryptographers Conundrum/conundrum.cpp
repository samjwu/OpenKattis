#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    int ans = 0;
    for (int i=0; i<input.length(); i+=3) {
        if (input[i] != 'P') {
            ans++;
        }
        if (input[i+1] != 'E') {
            ans++;
        }
        if (input[i+2] != 'R') {
            ans++;
        }
    }

    std::cout << ans << std::endl;
    
    return 0;
}