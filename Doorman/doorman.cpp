#include <iostream>
#include <string>

int main() {
    int x;
    std::string line;
    std::cin >> x >> line;

    int ans = 0;
    int women = 0, men = 0;

    while (line.length() > 0) {
        int diff = women - men;

        if (std::abs(diff) > x) {
            ans--;
            break;
        }

        if (diff < 0) {
            int nextWoman = line.find('W');
            if (nextWoman != -1 && nextWoman < 2) {
                line.erase(line.begin() + nextWoman);
                ans++;
                women++;
                continue;
            }
        }

        if (diff > 0) {
            int nextMan = line.find('M');
            if (nextMan != -1 && nextMan < 2) {
                line.erase(line.begin() + nextMan);
                ans++;
                men++;
                continue;
            }
        }

        // diff == 0
        if (line[0] == 'W') {
            women++;
        } else {
            men++;
        }
        ans++;
        line.erase(line.begin());
    }

    std::cout << ans;
}