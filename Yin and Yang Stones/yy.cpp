#include <iostream>
#include <string>

int main() {
    std::string stones;
    std::cin >> stones;

    int w = 0, b = 0;
    bool consec = false;

    if (stones.length() % 2 == 1) {
        std::cout << 0 << std::endl;
        return 0;
    }

    if (stones[0] == stones[stones.length()-1]) {
        consec = true;
    }
    for (int i=0; i<stones.length(); i++) {
        if (i > 0 && stones[i-1] == stones[i]) {
            consec = true;
        }
        if (stones[i] == 'W') {
            w++;
        } else {
            b++;
        }
    }

    if (consec && w == b) {
        std::cout << 1 << std::endl;
    } else {
        std::cout << 0 << std::endl;
    }
    
    return 0;
}