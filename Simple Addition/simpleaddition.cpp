#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string a, b, c;
    std::cin >> a >> b;
    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());

    int i = 0, j = 0, m = a.length(), n = b.length(), carry = 0;
    while (i < m && j < n) {
        int dig = ((a[i]-'0') + (b[j]-'0') + carry) % 10;
        carry = ((a[i]-'0') + (b[j]-'0') + carry) / 10;
        c.push_back(dig + '0');
        i++;
        j++;
    }

    while (i < m) {
        int dig = ((a[i]-'0') + carry) % 10;
        carry = ((a[i]-'0') + carry) / 10;
        c.push_back(dig + '0');
        i++;
    }

    while (j < n) {
        int dig = ((b[j]-'0') + carry) % 10;
        carry = ((b[j]-'0') + carry) / 10;
        c.push_back(dig + '0');
        j++;
    }

    if (carry) {
        c.push_back('1');
    }

    std::reverse(c.begin(), c.end());

    std::cout << c;
}