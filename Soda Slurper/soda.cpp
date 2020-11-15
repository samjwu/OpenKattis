#include <iostream>

int main() {
    int e, f, c;
    std::cin >> e >> f >> c;

    int bottles = e + f;
    int drank = 0;
    while (bottles >= c) {
        int buy = bottles / c;
        drank += buy;
        bottles %= c;
        bottles += buy;
    }

    std::cout << drank << std::endl;
    
    return 0;
}