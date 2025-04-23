#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> cards(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> cards[i];
    }

    std::sort(cards.begin(), cards.end());

    int score = 0;
    for (int i = 0; i < n; ++i) {
        if (i == 0 || cards[i-1] + 1 != cards[i]) {
            score += cards[i];
        }
    }

    std::cout << score << std::endl;

    return 0;
}
