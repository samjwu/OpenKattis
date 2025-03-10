#include <iostream>
#include <string>

int main() {
    int n;
    std::string colors;
    
    std::cin >> n >> colors;
    
    int currPos = 0;

    for (int i = 0; i < n; i++) {
        int nextPos = currPos;
        char nextColor = '\0';

        for (char color : {'R', 'G', 'B'}) {
            size_t candidatePos;
            if (currPos == 0 && colors[currPos] == color) {
                candidatePos = 0;
            } else {
                candidatePos = colors.find(color, currPos + 1);
            }
            
            if (candidatePos > nextPos) {
                nextPos = candidatePos;
                nextColor = color;
            }
        }

        std::cout << nextColor;
        currPos = nextPos;
    }
}
