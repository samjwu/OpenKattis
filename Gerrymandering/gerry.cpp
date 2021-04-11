#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

int main() {
    int p, d;
    std::cin >> p >> d;

    int idx, a, b;
    std::vector<std::vector<int>> votes(d, std::vector<int>(2, 0));
    int v = 0;

    for (int i=0; i<p; i++) {
        std::cin >> idx >> a >> b;
        votes[idx-1][0] += a;
        votes[idx-1][1] += b;
        v += a + b;
    }

    int wa, wb;
    int wat = 0, wbt = 0;
    std::string winner;

    for (int i=0; i<d; i++) {
        wa = 0;
        wb = 0;

        if (votes[i][0] > votes[i][1]) {
            winner = "A";
            wa = votes[i][0] - ((votes[i][0] + votes[i][1])/2 + 1);
            wb = votes[i][1];
        } else {
            winner = "B";
            wa = votes[i][0];
            wb = votes[i][1] - ((votes[i][0] + votes[i][1])/2 + 1);
        }

        wat += wa;
        wbt += wb;

        std::cout << winner << " " << wa << " " << wb << std::endl;
    }

    double e = (double) std::abs(wat - wbt) / v;

    std::printf("%.7lf", e);

    return 0;
}