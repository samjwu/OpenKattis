#include <iostream>
#include <string>

int main() {
    int n;
    std::string s;
    std::cin >> n >> s;

    int aGames = 0, hGames = 0;
    int aRounds = 0, hRounds = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A') {
            aGames += 1;
        } else {
            hGames += 1;
        }

        if (aGames == 3) {
            aRounds += 1;
            aGames = 0;
            hGames = 0;
        } else if (hGames == 3) {
            hRounds += 1;
            aGames = 0;
            hGames = 0;
        }
    }

    if (aRounds > hRounds) {
        std::cout << "Hannes";
    } else {
        std::cout << "Arnar";
    }
}
