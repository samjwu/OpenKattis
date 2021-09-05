#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

double convert(std::string& part, double total) {
    int n = part.length();
    if (part[n-1] == 'C') {
        return std::stod(part.substr(0, n-1));
    }

    // %
    return total * std::stod(part.substr(0, n-1)) / 100;
}

std::vector<double> calcFat(std::string line) {
    std::stringstream ss(line);
    std::string s;
    std::vector<std::string> parts(5);
    double cal = 0, percent = 0;

    for (int i=0; i<5; i++) {
        ss >> s;
        int n = s.length();
        if (s[n-1] == 'C') {
            cal += std::stod(s.substr(0, n-1));
        } else if (s[n-1] == 'g') {
            double grams = std::stod(s.substr(0, n-1));
            switch (i) {
                case 0:
                    grams *= 9;
                    break;
                case 4:
                    grams *= 7;
                    break;
                default:
                    grams *= 4;
            }
            cal += grams;
            s = std::to_string(grams) + 'C';
        } else { // %
            percent += std::stod(s.substr(0, n-1));
        }
        parts[i] = s;
    }

    double calPercent = 100 - percent;
    double totalCal = cal / (calPercent/100);
    std::vector<double> calories(5, 0);

    for (int i=0; i<5; i++) {
        calories[i] = convert(parts[i], totalCal);
    }

    for (int i=2; i<5; i++) {
        calories[1] += calories[i];
    }

    return calories;
}

int main() {
    std::string line, prev;
    std::vector<double> totalCalories(2); // fat, not fat

    while (true) {
        std::getline(std::cin, line);

        if (line.compare("-") == 0) {
            if (prev.compare("-") == 0) {
                break;
            }

            double fatPercent = 100 * totalCalories[0] / (totalCalories[0] + totalCalories[1]);
            std::cout << std::round(fatPercent) << "%" << std::endl;
            totalCalories[0] = 0;
            totalCalories[1] = 0;
            prev = line;
            continue;
        }

        // fat, protein, sugar, starch, alcohol
        std::vector<double> calories = calcFat(line); // fat, not fat
        totalCalories[0] += calories[0];
        totalCalories[1] += calories[1];

        prev = line;
    }
}