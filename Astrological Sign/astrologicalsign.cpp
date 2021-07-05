#include <iostream>
#include <string>
#include <unordered_map>

std::string formatDate(int day, std::string month, std::unordered_map<std::string, std::string>& monthDict) {
    std::string date = (monthDict[month]);

    date.push_back('/');

    if (day < 10) {
        date.push_back('0');
    }
    date.append(std::to_string(day));
    
    return date;
}

int main() {
    std::unordered_map<std::string, std::string> astroSigns = {
        {"Aries", "03/21"},
        {"Taurus", "04/21"},
        {"Gemini", "05/21"},
        {"Cancer", "06/22"},
        {"Leo", "07/23"},
        {"Virgo", "08/23"},
        {"Libra", "09/22"},
        {"Scorpio", "10/23"},
        {"Sagittarius", "11/23"},
        {"Capricorn", "12/22"},
        {"Aquarius", "01/21"},
        {"Pisces", "02/20"}
    };

    std::unordered_map<std::string, std::string> monthDict = {
        {"Jan", "01"},
        {"Feb", "02"},
        {"Mar", "03"},
        {"Apr", "04"},
        {"May", "05"},
        {"Jun", "06"},
        {"Jul", "07"},
        {"Aug", "08"},
        {"Sep", "09"},
        {"Oct", "10"},
        {"Nov", "11"},
        {"Dec", "12"}
    };

    int n;
    std::cin >> n;

    int day;
    std::string month;
    for (int i=0; i<n; i++) {
        std::cin >> day >> month;
        std::string date = formatDate(day, month, monthDict);

        if (date >= astroSigns["Aries"] && date < astroSigns["Taurus"]) {
            std::cout << "Aries";
        } else if (date >= astroSigns["Taurus"] && date < astroSigns["Gemini"]) {
            std::cout << "Taurus";
        } else if (date >= astroSigns["Gemini"] && date < astroSigns["Cancer"]) {
            std::cout << "Gemini";
        } else if (date >= astroSigns["Cancer"] && date < astroSigns["Leo"]) {
            std::cout << "Cancer";
        } else if (date >= astroSigns["Leo"] && date < astroSigns["Virgo"]) {
            std::cout << "Leo";
        } else if (date >= astroSigns["Virgo"] && date < astroSigns["Libra"]) {
            std::cout << "Virgo";
        } else if (date >= astroSigns["Libra"] && date < astroSigns["Scorpio"]) {
            std::cout << "Libra";
        } else if (date >= astroSigns["Scorpio"] && date < astroSigns["Sagittarius"]) {
            std::cout << "Scorpio";
        } else if (date >= astroSigns["Sagittarius"] && date < astroSigns["Capricorn"]) {
            std::cout << "Sagittarius";
        } else if (date >= astroSigns["Aquarius"] && date < astroSigns["Pisces"]) {
            std::cout << "Aquarius";
        } else if (date >= astroSigns["Pisces"] && date < astroSigns["Aries"]) {
            std::cout << "Pisces";
        } else {
            std::cout << "Capricorn";
        }

        std::cout << std::endl;
    }
}