#include <iostream>
#include <string>

int main() {
    int n, m;
    std::string plainText, cipherText;
    std::cin >> n >> m >> plainText >> cipherText;

    plainText = std::string(m-n, ' ') + plainText;
    for (int i=m-1; i>n-1; i--) {
        plainText[i-n] = 'a' + (26 + cipherText[i] - plainText[i]) % 26;
    }

    std::cout << plainText << std::endl;
    
    return 0;
}