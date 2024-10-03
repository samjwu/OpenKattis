#include <iostream>
#include <string>

int main() {
    std::string init, fin;

    std::cin >> init >> fin;

    int n = 1;

    for (int i = 0; i < init.length(); i++) {
        if (init[i] != fin[i]) {
            n += 1;
        }
    }

    std::cout << n;
}
