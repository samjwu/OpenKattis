#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {
    int t, b;
    std::cin >> t >> b;

    std::vector<int> storeSize(b);
    for (int i = 0; i < b; ++i) {
        std::cin >> storeSize[i];
    }

    std::string name;
    int version;
    std::map<std::string, int> latestVersions;
    for (int i = 0; i < t; ++i) {
        std::cin >> name >> version;
        latestVersions[name] = version;
    }

    for (int i = 0; i < b; ++i) {
        int totalDiff = 0;
        for (int j = 0; j < storeSize[i]; ++j) {
            std::cin >> name >> version;
            totalDiff += latestVersions[name] - version;
        }
        std::cout << totalDiff << "\n";
    }

    return 0;
}
