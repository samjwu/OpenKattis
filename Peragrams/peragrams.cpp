#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string in;
    std::cin >> in;

    std::unordered_map<char, int> freq;
    for (char c: in) {
        freq[c]++;
    }

    int oddCount = 0;
    for (auto pair: freq) {
        if (pair.second % 2 == 1) {
            oddCount++;
        }
    }

    if (oddCount > 0) {
        oddCount--;
    }
    std::cout << oddCount << std::endl;
    
    return 0;
}