#include <iostream>
#include <vector>

int main() {
    int hat;
    std::vector<int> hats;
    int sum = 0;

    for (int i=0; i<9; i++) {
        std::cin >> hat;
        sum += hat;
        hats.push_back(hat);
    }

    int extra = sum - 100;
    int fake1, fake2;

    for (int i=0; i<8; i++) {
        for (int j=i+1; j<9; j++) {
            if (hats[i] + hats[j] == extra) {
                fake1 = i;
                fake2 = j;
                break;
            }
        }
    }

    for (int i=0; i<9; i++) {
        if (i != fake1 && i != fake2) {
            std::cout << hats[i] << std::endl;
        }
    }
    
    return 0;
}