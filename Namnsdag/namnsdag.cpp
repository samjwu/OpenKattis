#include <iostream>
#include <string>

bool areSimilar(std::string name, std::string day) {
    int m = name.size();
    int n = day.size();

    if (m != n) {
        return false;
    }

    int diffs = 0;

    for (int i = 0; i < m; i++) {
        if (name[i] != day[i]) {
            diffs++;
        }
    }

    return diffs <= 1;
}

int main() {
    std::string name, day;
    int n, wait = 365;

    std::cin >> name >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> day;

        if (areSimilar(name, day)) {
            wait = i+1;
            break;
        }
    }

    std::cout << wait;
}
