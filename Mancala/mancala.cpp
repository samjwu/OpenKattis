#include <iostream>
#include <vector>

int main() {
    int p, k, n;
    std::cin >> p;

    for (int i=0; i<p; i++) {
        std::cin >> k >> n;
        
        std::vector<int> board(2001, 0);
        int last = 0;

        while (n > 0) {
            for (int j=1; j<=2001; j++) {
                if (j > last) {
                    last = j;
                }

                if (board[j] == 0) {
                    board[j] = j;
                    break;
                } else {
                    board[j]--;
                }
            }

            n--;
        }

        std::cout << k << " " << last << std::endl;
        
        for (int l=1; l<=last; l++) {
            std::cout << board[l] << " ";

            if (l % 10 == 0) {
                std::cout << std::endl;
            }
        }

        if (last % 10 != 0) {
            std::cout << std::endl;
        }
    }
}