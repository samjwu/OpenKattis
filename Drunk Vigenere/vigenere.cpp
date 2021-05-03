#include <iostream>
#include <string>

int main() {
    std::string c, k, ans;
    char ch;
    std::cin >> c;
    std::cin >> k;
    int n = c.length();

    for (int i=0; i<n; i++) {
        int shift = k[i] - 'A';
        if (i % 2 == 0) { //back
            ch = (c[i] - 'A' - shift + 26) % 26 + 'A';
        } else { //forward
            ch = (c[i] - 'A' + shift) % 26 + 'A';
        }
        ans.push_back(ch);
    }

    std::cout << ans << std::endl;

    return 0;
}