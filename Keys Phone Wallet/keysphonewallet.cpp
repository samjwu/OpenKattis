#include <iostream>
#include <string>

int main() {
    int n;
    std::string s;
    bool hasKeys = false, hasPhone = false, hasWallet = false;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> s;

        if (s.compare("keys") == 0) {
            hasKeys = true;
        } else if (s.compare("phone") == 0) {
            hasPhone = true;
        } else if (s.compare("wallet") == 0) {
            hasWallet = true;
        }
    }

    if (!hasKeys) {
        std::cout << "keys" << std::endl;
    }

    if (!hasPhone) {
        std::cout << "phone" << std::endl;
    }

    if (!hasWallet) {
        std::cout << "wallet" << std::endl;
    }

    if (hasKeys && hasPhone && hasWallet) {
        std::cout << "ready" << std::endl;
    }
}
