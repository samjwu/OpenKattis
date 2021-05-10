#include <iostream>
#include <string>

int main() {
	std::string input, s1, s2, s3;
    std::cin >> input;

    int n = input.length();
    s1 = input.substr(0, n/3);
    s2 = input.substr(n/3, n/3);
    s3 = input.substr(2*n/3, n/3);

    if (s1.compare(s2) == 0 || s1.compare(s3) == 0) {
        std::cout << s1;
    } else {
        std::cout << s2;
    }
}