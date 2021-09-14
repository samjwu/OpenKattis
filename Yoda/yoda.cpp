#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string n, m, a, b;
    std::cin >> n >> m;

    int i = n.length() - 1, j = m.length() - 1;
    while (i >= 0 && j >= 0) {
        if (n[i] == m[j]) {
            a.push_back(n[i]);
            b.push_back(m[j]);
        } else if (n[i] > m[j]) {
            a.push_back(n[i]);
        } else {
            b.push_back(m[j]);
        }
        i--;
        j--;
    }

    while (i >= 0) {
        a.push_back(n[i]);
        i--;
    }

    while (j >= 0) {
        b.push_back(m[j]);
        j--;
    }

    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());

    if (a.length() == 0) {
        std::cout << "YODA" << std::endl;
    } else {
        std::cout << std::stoi(a) << std::endl;
    }

    if (b.length() == 0) {
        std::cout << "YODA" << std::endl;
    } else {
        std::cout << std::stoi(b) << std::endl;
    }
}