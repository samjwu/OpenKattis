#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> teamA, teamB, names;
    int total, idx = 0, rhyme = -1, teamTurn = 0;
    std::string line, word;
    
    std::getline(std::cin, line);
    std::stringstream ss(line);
    while (ss >> word) {
        rhyme++;
    }

    std::cin >> total;
    for (int i=0; i<total; i++) {
        std::cin >> word;
        names.push_back(word);
    }

    while (names.size() > 0) {
        for (int i=0; i<rhyme; i++) {
            idx = (idx + 1) % names.size();
        }

        if (teamTurn % 2 == 0) {
            teamA.push_back(names[idx]);
        } else {
            teamB.push_back(names[idx]);
        }

        teamTurn += 1;
        names.erase(names.begin() + idx);
    }

    std::cout << teamA.size() << std::endl;
    for (std::string name: teamA) {
        std::cout << name << std::endl;
    }

    std::cout << teamB.size() << std::endl;
    for (std::string name: teamB) {
        std::cout << name << std::endl;
    }
}