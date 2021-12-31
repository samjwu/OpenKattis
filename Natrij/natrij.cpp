#include <iostream>
#include <string>

int main() {
    int h1, m1, s1, h2, m2, s2;
    std::string str;

    std::getline(std::cin, str, ':');
    h1 = std::stoi(str);
    std::getline(std::cin, str, ':');
    m1 = std::stoi(str);
    std::getline(std::cin, str);
    s1 = std::stoi(str);

    std::getline(std::cin, str, ':');
    h2 = std::stoi(str);
    std::getline(std::cin, str, ':');
    m2 = std::stoi(str);
    std::getline(std::cin, str);
    s2 = std::stoi(str);

    int time1 = h1*60*60 + m1*60 + s1;
    int time2 = h2*60*60 + m2*60 + s2;

    int time3 = time2 - time1;
    if (time3 < 0) {
        time3 += 24*60*60;
    }

    int h3 = time3 / 3600;
    int m3 = (time3 % 3600) / 60;
    int s3 = time3 % 60;
    if (h3 == 0 && m3 == 0 && s3 == 0) {
        h3 = 24;
    }

    if (h3 < 10) {
        std::cout << '0' << h3 << ':';
    } else {
        std::cout << h3 << ':';
    }

    if (m3 < 10) {
        std::cout << '0' << m3 << ':';
    } else {
        std::cout << m3 << ':';
    }

    if (s3 < 10) {
        std::cout << '0' << s3;
    } else {
        std::cout << s3;
    }
}