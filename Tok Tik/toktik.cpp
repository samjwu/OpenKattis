#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    int n, a, hi = 0;
    std::string s, best;
    std::unordered_map<std::string, int> popularity;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> s >> a;

        if (popularity.find(s) != popularity.end()) {
            popularity[s] += a;
        } else {
            popularity[s] = a;
        }

        if (popularity[s] > hi) {
            hi = popularity[s];
            best = s;
        }
    }

    std::cout << best;
}
