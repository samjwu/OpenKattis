#include <iostream>
#include <set>
#include <sstream>
#include <string>

int main() {
    std::string line;
    std::getline(std::cin, line, '\n');
    int num_testcases = std::stoi(line);
    int num_trips;
    std::set<std::string> cities;

    for (int i=0; i<num_testcases; i++) {
        std::getline(std::cin, line, '\n');
        num_trips = stoi(line);
        for (int j=0; j<num_trips; j++) {
            std::getline(std::cin, line, '\n');
            cities.insert(line);
        }
        std::cout << cities.size() << std::endl;
        cities.clear();
    }

	return 0;
}