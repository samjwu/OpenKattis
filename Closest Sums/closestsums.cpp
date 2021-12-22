#include <climits>
#include <cmath>
#include <iostream>
#include <vector>

int main() {
    std::vector<long> nums, queries, sums;
    long n, m, num, query;
    int caseNum = 1;
    
    while (std::cin >> n) {
        std::cout << "Case " << caseNum << ":" << std::endl;
        caseNum++;

        for (int i=0; i<n; i++) {
            std::cin >> num;
            nums.push_back(num);
        }

        std::cin >> m;
        for (int j=0; j<m; j++) {
            std::cin >> query;
            queries.push_back(query);
        }

        for (int i=0; i<n-1; i++) {
            for (int j=i+1; j<n; j++) {
                sums.push_back(nums[i] + nums[j]);
            }
        }

        for (int i=0; i<m; i++) {
            long closestDiff = INT_MAX;
            long closest;
            for (int j=0; j<sums.size(); j++) {
                long diff = std::abs(queries[i] - sums[j]);
                if (diff < closestDiff) {
                    closestDiff = diff;
                    closest = sums[j];
                }
            }
            std::cout << "Closest sum to " << queries[i] << " is " << closest << "."  << std::endl;
        }

        nums.clear();
        queries.clear();
        sums.clear();
    }
}