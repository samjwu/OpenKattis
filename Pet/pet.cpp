#include <iostream>

int main() {
    int score;
    int total;
    int best = 0;
    int idx;
    for (int i=0; i<5; i++) {
        total = 0;
        for (int j=0; j<4; j++) {
            std::cin >> score;
            total += score;
        }
        if (total > best) {
            best = total;
            idx = i+1;
        }
    }

    std::cout << idx << " " << best << std::endl;
    
    return 0;
}