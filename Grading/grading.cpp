#include <iostream>
#include <vector>

int main() {
    std::vector<int> scores;
    std::vector<char> grades = {'A', 'B', 'C', 'D', 'E', 'F'};
    int num;

    for (int i=0; i<5; i++) {
        std::cin >> num;
        scores.push_back(num);
    }
    std::cin >> num;

    int idx = 0;
    while (idx < 5 && num < scores[idx]) {
        idx++;
    }

    std::cout << grades[idx];
}