#include <cmath>
#include <iostream>
#include <string>
#include <vector>

std::vector<int> convert(std::string line) {
    std::vector<int> ans;

    for (char c: line) {
        if (c == ' ') {
            ans.push_back(0);
        } else {
            ans.push_back(c - 'a' + 1);
        }
    }

    return ans;
}

std::string encrypt(std::vector<int>& nums) {
    std::string ans;
    int sum = 0;

    for (int& num: nums) {
        sum += num;
        num = sum;
        num %= 27;

        if (num == 0) {
            ans.push_back(' ');
        } else {
            ans.push_back(num + 'a' - 1);
        }
    }

    return ans;
}

std::string decrypt(std::vector<int>& nums) {
    std::string ans;

    int sum = 0;

    for (int& num: nums) {
        num -= sum;
        while (num < 0) {
            num += 27;
        }
        num %= 27;
        sum += num;

        if (num == 0) {
            ans.push_back(' ');
        } else {
            ans.push_back(num + 'a' - 1);
        }
    }

    return ans;
}

int main() {
    std::string line;
    std::getline(std::cin, line);
    int n = std::stoi(line);
    char op;

    for (int i=0; i<n; i++) {
        std::getline(std::cin, line);
        op = line[0];

        std::vector<int> nums = convert(line.substr(2));

        if (op == 'e') {
            std::cout << encrypt(nums) << std::endl;
        } else {
            std::cout << decrypt(nums) << std::endl;
        }
    }
}