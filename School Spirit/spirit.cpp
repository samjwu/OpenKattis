#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    double score;
    std::vector<double> scores(n);
    double ans = 0;

    for (int i=0; i<n; i++) {
        std::cin >> score;
        scores[i] = score;
        ans += score * pow(0.8, i);
    }
    ans /= 5;

    std::vector<double> gScores(n);
    for (int i=0; i<n; i++) {
        score = 0;
        for (int j=0; j<n; j++) {
            if (j == i) {
                continue;
            } else if (j < i) {
                score += scores[j] * pow(0.8, j);
            } else {
                score += scores[j] * pow(0.8, j-1);
            }
        }
        score /= 5;
        gScores[i] = score;
    }

    score = 0;
    for (int i=0; i<n; i++) {
        score += gScores[i];
    }

    std::printf("%10.7f\n", ans);
    std::printf("%10.7f\n", score / n);

    return 0;
}