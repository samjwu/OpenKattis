#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, std::string> monthMap = {
        {"JAN", "01"},
        {"FEB", "02"},
        {"MAR", "03"},
        {"APR", "04"},
        {"MAY", "05"},
        {"JUN", "06"},
        {"JUL", "07"},
        {"AUG", "08"},
        {"SEP", "09"},
        {"OCT", "10"},
        {"NOV", "11"},
        {"DEC", "12"}
    };

    std::string d, m, y;

    std::cin >> d >> m >> m >> y;

    std::cout << "20" + y + "-" + monthMap[m.substr(1, 3)] + "-" + d << std::endl;

    return 0;
}
