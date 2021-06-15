#include <algorithm>
#include <iostream>
#include <vector>

bool hasOverlap(std::vector<int>& i1, std::vector<int>& i2) {
    if (i1[0] >= i2[1] || i1[1] <= i2[0]) {
        return false;
    }

    return true;
}

std::vector<int> getOverlap(std::vector<int>& i1, std::vector<int>& i2) {
    if (!hasOverlap(i1, i2)) {
        return {-1, -1};
    }

    return {std::max(i1[0], i2[0]), std::min(i1[1], i2[1])};
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    std::vector<std::vector<int>> intervals;

    for (int i=0; i<3; i++) {
        int start, end;
        std::cin >> start >> end;
        intervals.push_back({start, end});
    }

    std::vector<int> overlap12 = getOverlap(intervals[0], intervals[1]);
    std::vector<int> overlap13 = getOverlap(intervals[0], intervals[2]);
    std::vector<int> overlap23 = getOverlap(intervals[1], intervals[2]);
    std::vector<int> overlap123 = getOverlap(overlap12, intervals[2]);

    int threeTruckTime = overlap123[1] - overlap123[0];
    int twoTruckTime = (overlap12[1] - overlap12[0]) + (overlap13[1] - overlap13[0]) + (overlap23[1] - overlap23[0]) - (threeTruckTime * 3);
    int oneTruckTime = (intervals[0][1] - intervals[0][0]) + (intervals[1][1] - intervals[1][0]) + (intervals[2][1] - intervals[2][0]) - (twoTruckTime * 2) - (threeTruckTime * 3);
    int cost = oneTruckTime * a + 2 * twoTruckTime * b + 3 * threeTruckTime * c;
    std::cout << cost;
}