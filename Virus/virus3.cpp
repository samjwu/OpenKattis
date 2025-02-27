#include <iostream>
#include <string>

int main() {
    std::string s, v;
    std::cin >> s >> v;

    int i = 0, j = 0;
    int m = s.length(), n = v.length();

    while (i < m && j < n) {
        if (s[i] == v[j]) {
            i++;
            j++;
        } else {
            j++;
        }
    }

    if (i == m) {
        std::cout << "Ja";
    } else {
        std::cout << "Nej";
    }
}
