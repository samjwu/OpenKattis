#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    std::string pwd;
    double prob;
    std::vector<double> probs;

    for (int i=0; i<n; i++) {
        std::cin >> pwd >> prob;
        probs.push_back(prob);
    }

    std::sort(probs.begin(), probs.end());

    int attemptNum = 1;
    double ans = 0;
    for (int i=n-1; i>=0; i--) {
        ans += attemptNum * probs[i];
        attemptNum++;
    }

    std::cout.precision(12);
    std::cout << ans;
}