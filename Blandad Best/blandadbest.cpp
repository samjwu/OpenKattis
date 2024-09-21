#include <iostream>
#include <string>

int main() {
    int n;

    std::string type;

    std::cin >> n;

    bool naut = false, kjuk = false;

    for (int i = 0; i < n; i++) {
        std::cin >> type;

        if (type[0] == 'n') {
            naut = true;
        } else {
            kjuk = true;
        }
    }

    if (naut && kjuk) {
        std::cout << "blandad best";
    } else if (naut) {
        std::cout << "nautakjot";
    } else {
        std::cout << "kjuklingur";
    }
}
