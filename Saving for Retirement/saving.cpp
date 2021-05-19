#include <iostream>

int main() {
    int b, br, bs, a, as;
    std::cin >> b >> br >> bs >> a >> as;

    int btotal = (br-b) * bs;
    int ayears = btotal / as;
    if (as * ayears <= btotal) {
        ayears++;
    }

    std::cout << a + ayears;
}