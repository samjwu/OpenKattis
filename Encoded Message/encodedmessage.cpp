#include <cmath>
#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    int n = stoi(input);

    for (int i=0; i<n; i++) {
        std::string ans = "";
        std::getline(std::cin, input);
        int root = std::sqrt(input.length());

        for (int col=root-1; col>=0; col--) {
            for (int row=col; row<input.length(); row+=root) {
                ans.push_back(input[row]);
            }
        }

        std::cout << ans << std::endl;
    }
     
    return 0;
}