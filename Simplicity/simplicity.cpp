#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string s;
    std::cin >> s;

    std::vector<int> freq(26);
    for (char c: s) {
        freq[c-'a']++;
    }

    std::sort(freq.rbegin(), freq.rend());

    std::cout << s.length() - freq[0] - freq[1];
}