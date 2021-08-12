#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    int longest = 0;
    int last;
    std::string line;
    std::unordered_map<int, int> freq;

    while (std::getline(std::cin, line)) {
        last = line.length();
        longest = std::max(longest, last);
        freq[last]++;
    }
    freq[last]--;

    int ragged = 0;
    for (int i=longest-1; i>=1; i--) {
        ragged += freq[i] * (longest - i) * (longest - i);
    }
    std::cout << ragged;
}