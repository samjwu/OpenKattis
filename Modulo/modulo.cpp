#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    std::string input;
    std::unordered_set<int> uset;
    int num;

    while (std::getline(std::cin, input)) {
        num = std::stoi(input);
        num %= 42;
        uset.insert(num);
    }

    std::cout << uset.size() << std::endl;
     
    return 0;
}