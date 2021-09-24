#include <iostream>
#include <sstream>
#include <string>
#include <vector>

void addDigits(std::vector<int>& digits, std::string num) {
    for (char c: num) {
        digits[c-'0']++;
    }
}

int main() {
    std::string line, road, buildings, word;
    std::getline(std::cin, line);
    int n = std::stoi(line);

    for (int i=0; i<n; i++) {
        std::getline(std::cin, road);
        std::getline(std::cin, buildings);
        std::stringstream ss(buildings);
        ss >> word;
        int addresses = std::stoi(word);
        int j = addresses;

        std::vector<int> digits(10);

        while (j > 0) {
            std::getline(std::cin, line);
            ss.clear();
            ss.str(line);
            ss >> word;

            if (word.compare("+") == 0) {
                ss >> word;
                int start = std::stoi(word);
                ss >> word;
                int end = std::stoi(word);
                ss >> word;
                int interval = std::stoi(word);
                for (int addr=start; addr<=end; addr+=interval) {
                    addDigits(digits, std::to_string(addr));
                    j--;
                }
            } else {
                addDigits(digits, word);
                j--;
            }
        }

        std::cout << road << std::endl;
        if (addresses != 1) {
            std::cout << addresses << " addresses" << std::endl;
        } else {
            std::cout << addresses << " address" << std::endl;
        }
        int sum = 0;
        for (int l=0; l<10; l++) {
            std::cout << "Make " << digits[l] << " digit " << l << std::endl;
            sum += digits[l];
        }
        if (sum == 1) {
            std::cout << "In total " << sum << " digit" << std::endl;
        } else {
            std::cout << "In total " << sum << " digits" << std::endl;
        }
    }
}