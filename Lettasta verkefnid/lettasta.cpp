#include <iostream>
#include <string>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::string problem;
    std::vector<std::string> problems;

    int score;
    std::vector<int> scores(n);

    for (int i = 0; i < n; i++) {
        std::cin >> problem;
        problems.push_back(problem);
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> score;
            scores[j] += score;
        }
    }

    int idx = -1;
    int high = -1;

    for (int i = 0; i < n; i++) {
        if (scores[i] > high) {
            idx = i;
            high = scores[i];
        }
    }

    std::cout << problems[idx];
}
