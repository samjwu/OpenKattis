#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    int wins = 0;
    std::string moves;
    
    for (int i=0; i<n; i++) {
        std::cin >> moves;
        bool cd = false;
        
        for (int i=1; i<moves.length(); i++) {
            if (moves[i-1] == 'C' && moves[i] == 'D') {
                cd = true;
            }
        }

        if (!cd) {
            wins++;
        }
    }

    std::cout << wins;
}