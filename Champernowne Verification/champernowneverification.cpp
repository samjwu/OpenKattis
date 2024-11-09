#include <iostream>
#include <string>

int main() {
    std::string s;

    std::getline(std::cin, s);

    int num = 1;
    int k = 0;
    int i = 0;
    bool is_champ = true;

    while (i < s.length()) {
        std::string num_str = std::to_string(num);
        std::string sub = s.substr(i, num_str.length());
        if (num_str != sub) {
            is_champ = false;
            break;
        }

        num += 1;
        k += 1;
        i += num_str.length();
    }

    if (is_champ) {
        std::cout << k;
    } else {
        std::cout << -1;
    }
}
