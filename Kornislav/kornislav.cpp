#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int num;
    for (int i=0; i<4; i++) {
        std::cin >> num;
        nums.push_back(num);
    }
    
    std::vector<int>::iterator it = std::min_element(nums.begin(), nums.end());
    int ans = *it;
    nums.erase(it);
    it = std::min_element(nums.begin(), nums.end());
    nums.erase(it);
    it = std::min_element(nums.begin(), nums.end());
    ans *= *it;

    std::cout << ans << std::endl;
    
    return 0;
}