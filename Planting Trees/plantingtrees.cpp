#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> days;
    int day;
    for (int i=0; i<n; i++) {
        std::cin >> day;
        days.push_back(day);
    }

    std::sort(days.begin(), days.end());
    std::reverse(days.begin(), days.end());

    int maxDay = 0;
    for (int i=0; i<n; i++) {
        maxDay = std::max(maxDay, i+1 + days[i]+1);
    }
    std::cout << maxDay;
}