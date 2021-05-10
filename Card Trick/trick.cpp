#include <deque>
#include <iostream>

/**
 * Perform procedure in reverse to determime initial order of cards
 */
int main() {
    int t;
    std::cin >> t;

    int n;
    std::deque<int> deck;
    
    for (int i=0; i<t; i++) {
        std::cin >> n;

        // deal n of Spades face up in reverse order 
        // (equivalent to inserting n to 1 of Spades into deck)
        deck.push_back(n);
        for (int j=n-1; j>0; j--) {
            deck.push_back(j);

            // move n cards at a time from bottom to top (from n shifts to 1 shift)
            for (int k=0; k<j; k++) {
                deck.push_back(deck.front());
                deck.pop_front();
            }
        }

        // front to back = bottom to top
        while (!deck.empty()) {
            std::cout << deck.back() << " ";
            deck.pop_back();
        }
        std::cout << std::endl;
    }
}