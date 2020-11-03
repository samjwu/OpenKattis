#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    int n, num;
    std::vector<int> v1, v2, v1_original;
    std::unordered_map<int, int> map;

    while (std::cin >> n) {
        if (n == 0) {
            break;
        }

        for (int i=0; i<n; i++) {
            std::cin >> num;
            v1.push_back(num);
            v1_original.push_back(num);
        }
        for (int i=0; i<n; i++) {
            std::cin >> num;
            v2.push_back(num);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        for (int i=0; i<n; i++) {
            map[v1[i]] = v2[i];
        }

        for (int i=0; i<n; i++) {
            std::cout << map[v1_original[i]] << std::endl;
        }
        std::cout << std::endl;

        v1.clear();
        v1_original.clear();
        v2.clear();
        map.clear();
    }
    
    return 0;
}