#include <iostream>
#include <map>
#include <string>

int main() {
    std::string line, winner;
    std::map<std::string, int> freq;
    int majority = 0;
    
    while (line.compare("***") != 0) {
        std::getline(std::cin, line);
        freq[line]++;
        if (majority < freq[line]) {
            majority = freq[line];
            winner = line;
        }
    }

    for (auto p: freq) {
        if (p.second == majority && p.first.compare(winner) != 0) {
            std::cout << "Runoff!";
            return 0;
        }
    }

    std::cout << winner;
}