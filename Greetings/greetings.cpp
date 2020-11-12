#include <cstring>
#include <iostream>

int main() {
    char hey[1000];
    std::cin >> hey;

    int size = 0;
    for (char c:hey) {
        if (c == '\0') {
            break;
        }
        size++;
    }
    size = (size - 2) * 2 + 2;
    
    char heey[size + 1];
    std::memset(heey, 'e', size);
    heey[0] = 'h';
    heey[size - 1] = 'y';
    heey[size] = '\0';

    std::cout << heey << std::endl;
    
    return 0;
}