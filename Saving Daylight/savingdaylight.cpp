#include <iostream>
#include <string>

int main() {
    std::string month, day, year, rise, set;

    while (std::cin >> month >> day >> year >> rise >> set) {
        std::cout << month << " " << day << " " << year << " ";

        int colon = rise.find(':');
        int riseH = std::stoi(rise.substr(0, colon));
        int riseM = std::stoi(rise.substr(colon+1));
        colon = set.find(':');
        int setH = std::stoi(set.substr(0, colon));
        int setM = std::stoi(set.substr(colon+1));
        
        int hours = setH - riseH;
        int minutes = setM - riseM;
        if (minutes < 0) {
            hours--;
            minutes += 60;
        }

        std::cout << hours << " hours " << minutes << " minutes" << std::endl;
    }
}