#include <iostream>

bool IsPerfectSquare(int num) {
    for (int j = 0; j*j <= num; j++) {
        if (j * j == num) {
            return true;
        }
    }

    return false;
}

int main() {
    int n;
    std::cin >> n;

    int num;
    for (int i = 0; i < n; i++) {
        std::cin >> num;
        bool is_square = IsPerfectSquare(num);
        bool is_odd = num % 2 == 1 ? true : false;

        if (is_square && is_odd) {
            std::cout << "OS" << std::endl;
        } else if (is_odd) {
            std::cout << "O" << std::endl;
        } else if (is_square) {
            std::cout << "S" << std::endl;
        } else {
            std::cout << "EMPTY" << std::endl;
        }
    }
}
