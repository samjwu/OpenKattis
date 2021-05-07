#include <iostream>
#include <string>

int main() {
    std::string cipher, key;
    std::getline(std::cin, cipher);
    std::getline(std::cin, key);

    std::string msg;

    int k = std::min(key.length(), cipher.length());

    for (int i=0; i<k; i++) {
        char c = (cipher[i] - key[i] + 26) % 26 + 'A';
        msg.push_back(c);
    }

    for (int i=k; i<cipher.length(); i++) {
        char c = (cipher[i] - msg[i - k] + 26) % 26 + 'A';
        msg.push_back(c);
    }

    std::cout << msg << std::endl;

    return 0;
}