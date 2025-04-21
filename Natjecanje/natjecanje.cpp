#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n, s, r;
    std::cin >> n >> s >> r;

    std::vector<int> damaged(s);
    std::vector<int> reserve(r);

    for (int i = 0; i < s; ++i) {
        std::cin >> damaged[i];
    }
    for (int i = 0; i < r; ++i) {
        std::cin >> reserve[i];
    }

    std::sort(damaged.begin(), damaged.end());
    std::sort(reserve.begin(), reserve.end());

    std::vector<bool> used(r, false);
    for (int i = 0; i < s; ++i) {
        auto it = std::find(reserve.begin(), reserve.end(), damaged[i]);

        if (it != reserve.end()) {
            int index = std::distance(reserve.begin(), it);
            used[index] = true;
            damaged[i] = -1;
        }
    }

    for (int i = 0; i < s; ++i) {
        if (damaged[i] == -1) {
            continue;
        }

        for (int j = 0; j < r; ++j) {
            if (used[j]) {
                continue;
            }

            if (reserve[j] == damaged[i] - 1 || reserve[j] == damaged[i] + 1) {
                used[j] = true;
                damaged[i] = -1;
                break;
            }
        }
    }

    int cannotStart = 0;
    for (int i = 0; i < s; ++i) {
        if (damaged[i] != -1) {
            ++cannotStart;
        }
    }

    std::cout << cannotStart << std::endl;
    
    return 0;
}
