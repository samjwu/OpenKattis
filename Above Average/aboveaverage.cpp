#include <cstdio>
#include <iostream>
#include <vector>

int main() {
    int c, n;
    double grade;
    std::vector<double> grades;
    
    std::cin >> c;

    for (int i=0; i<c; i++) {
        std::cin >> n;

        double sum = 0;
        for (int j=0; j<n; j++) {
            std::cin >> grade;
            grades.push_back(grade);
            sum += grade;
        }

        double above = 0;
        double avg = sum / grades.size();
        for (double g: grades) {
            if (g > avg) {
                above++;
            }
        }

        std::printf("%.3f%%\n", above / grades.size() * 100);
        grades.clear();
    }
}