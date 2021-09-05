#include <iostream>
#include <map>
#include <string>

int main() {
    std::string line;
    std::getline(std::cin, line);
    int n = std::stoi(line);

    int best = 1001;
    std::map<std::string, int> freq;

    for (int i=0; i<n; i++) {
        std::getline(std::cin, line);
        freq[line]++;
    }

    for (auto pair: freq) {
        if (pair.second < best) {
            best = pair.second;
        }
    }

    for (auto pair: freq) {
        if (pair.second == best) {
            std::cout << pair.first << std::endl;
        }
    }
}