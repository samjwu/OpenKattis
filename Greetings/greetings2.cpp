#include <iostream>
#include <string>

int main() {
    std::string hey;
    std::cin >> hey;

    int new_size = (hey.length() - 2) * 2 + 2;
    std::string heey(new_size, 'e');
    heey[0] = 'h';
    heey[new_size - 1] = 'y';

    std::cout << heey << std::endl;

    return 0;
}