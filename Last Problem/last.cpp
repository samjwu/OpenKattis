#include <cstdio>
#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);

    std::printf("Thank you, %s, and farewell!\n", s.c_str());
}