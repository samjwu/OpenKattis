#include <iostream>
#include <unordered_map>

int main() {
    int d, m;
    std::cin >> d >> m;

    std::unordered_map<int, int> month_to_days;
    month_to_days[0] = 0;
    month_to_days[1] = 31;
    month_to_days[2] = 31+28;
    month_to_days[3] = 31+28+31;
    month_to_days[4] = 31+28+31+30;
    month_to_days[5] = 31+28+31+30+31;
    month_to_days[6] = 31+28+31+30+31+30;
    month_to_days[7] = 31+28+31+30+31+30+31;
    month_to_days[8] = 31+28+31+30+31+30+31+31;
    month_to_days[9] = 31+28+31+30+31+30+31+31+30;
    month_to_days[10] = 31+28+31+30+31+30+31+31+30+31;
    month_to_days[11] = 31+28+31+30+31+30+31+31+30+31+30;
    month_to_days[12] = 31+28+31+30+31+30+31+31+30+31+30+31;

    int day_of_week = (d + month_to_days[m-1]) % 7;
    switch (day_of_week) {
        case 0:
            std::cout << "Wednesday" << std::endl;
            break;
        case 1:
            std::cout << "Thursday" << std::endl;
            break;
        case 2:
            std::cout << "Friday" << std::endl;
            break;
        case 3:
            std::cout << "Saturday" << std::endl;
            break;
        case 4:
            std::cout << "Sunday" << std::endl;
            break;
        case 5:
            std::cout << "Monday" << std::endl;
            break;
        case 6:
            std::cout << "Tuesday" << std::endl;
            break;
    }

    return 0;
}