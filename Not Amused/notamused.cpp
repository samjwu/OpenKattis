#include <cstdio>
#include <iostream>
#include <map>
#include <sstream>
#include <string>

int main() {
    std::map<std::string, int> map, minutes;
    std::string line;
    int day = 0;
    std::string action, name;
    int time;

    while (std::getline(std::cin, line)) {
        if (line.compare("OPEN") == 0) {
            day++;
        } else if (line.compare("CLOSE") == 0) {
            std::cout << "Day " << day << std::endl;
            for (auto p: minutes) {
                std::cout << p.first;
                std::printf(" $%.2f\n", (double) p.second * 0.1);
            }
            std::cout << std::endl;
            map.clear();
            minutes.clear();
        } else {
            std::stringstream ss(line);
            ss >> action >> name >> time;
            if (action.compare("ENTER") == 0) {
                map[name] = time;
            } else {
                minutes[name] += time - map[name];
            }
        }
    }
}