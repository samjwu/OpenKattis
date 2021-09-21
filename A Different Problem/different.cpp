#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string a, b;

    while (std::cin >> a >> b) {
        int n = a.length();
        int m = b.length();

        if (m > n || (m == n && b > a)) {
            std::swap(a, b);
            std::swap(m, n);
        }

        std::reverse(a.begin(), a.end());
        std::reverse(b.begin(), b.end());

        std::string c;
        int carry = 0;
        int i = 0;

        while (i < m && i < n) {
            int diff = a[i] - b[i] - carry;
            
            if (diff >= 0) {
                c.push_back(diff + '0');
                carry = 0;
            } else {
                carry = 1;
                c.push_back((10 + diff) + '0');
            }

            i++;
        }
        
        while (i < n) {
            int diff = a[i] - '0' - carry;
            
            if (diff >= 0) {
                c.push_back(diff + '0');
                carry = 0;
            } else {
                carry = 1;
                c.push_back((10 - diff) + '0');
            }

            i++;
        }

        while (c.length() > 1 && c[i-1] == '0') {
            c.pop_back();
            i--;
        }

        std::reverse(c.begin(), c.end());
        std::cout << c << std::endl;
    }
}