#include <iostream>
#include <vector>

int main() {
    int n;
    int cost;
    std::vector<std::vector<int>> flights;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> cost;
            if (cost != -1) {
                flights.push_back({i+1, j+1, cost});
            }
        }
    }

    std::cout << flights.size() << std::endl;
    
    for (int i = 0; i < flights.size(); i++) {
        std::cout << flights[i][0] << ' ' << flights[i][1] << ' ' << flights[i][2] << std::endl;
    }
}
