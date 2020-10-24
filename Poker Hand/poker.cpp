#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>

int main() {
    std::string input;
    
    std::unordered_map<char, int> rankCount;
    for (int i=0; i<5; i++) {
        std::cin >> input;
        rankCount[input[0]]++;
    }
    
    std::unordered_map<char, int>::iterator it = std::max_element(rankCount.begin(), rankCount.end(), \
                                                [] (std::pair<char, int> p1, std::pair<char, int> p2) -> \
                                                bool {return p1.second < p2.second;});
    int ans = it->second;
    std::cout << ans << std::endl;

    return 0;
}