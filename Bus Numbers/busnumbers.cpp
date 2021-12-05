#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n, bus;
    std::vector<int> buses;

    std::cin >> n;
    for (int i=0; i<n; i++) {
        std::cin >> bus;
        buses.push_back(bus);
    }

    std::sort(buses.begin(), buses.end());

    for (int i=0; i<n; i++) {
        int j = i+1;
        while (j < n && buses[j-1] == buses[j] - 1) {
            j++;
        }

        if (j - i > 2) {
            std::cout << buses[i] << '-' << buses[j-1] << ' ';
            i = j-1;
        } else {
            std::cout << buses[i] << ' ';
        }
    }
}