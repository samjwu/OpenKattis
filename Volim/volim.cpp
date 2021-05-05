#include <iostream>

int main() {
    int boom = 210;
    int players = 8;

    int k, n, t, currTime = 0;
    char z;

    std::cin >> k;
    k -= 1;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> t >> z;
        currTime += t;
        if (currTime >= boom) {
            break;
        }
        if (z == 'T') {
            k = (k+1) % players;
        }
    }

	std::cout << k+1 << std::endl;

	return 0;
}