#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

int main() {
    std::unordered_map<char, std::vector<int>> keys = 
    {
        {'c', {2,3,4,7,8,9,10}},
        {'d', {2,3,4,7,8,9}},
        {'e', {2,3,4,7,8}},
        {'f', {2,3,4,7}},
        {'g', {2,3,4}},
        {'a', {2,3}},
        {'b', {2}},
        {'C', {3}},
        {'D', {1,2,3,4,7,8,9}},
        {'E', {1,2,3,4,7,8}},
        {'F', {1,2,3,4,7}},
        {'G', {1,2,3,4}},
        {'A', {1,2,3}},
        {'B', {1,2}},
    };

    std::string line;
    std::getline(std::cin, line);
    int n = std::stoi(line);

    std::string song;
    for (int i=0; i<n; i++) {
        int pressed = 0, pressing = 0;
        std::vector<int> ans(10);
        std::getline(std::cin, song);

        for (char note: song) {
            for (int finger: keys[note]) {
                int offset = finger - 1; // subtract 1 since map is 1-indexed and answer is 0-indexed
                if ((pressed & (1 << offset)) == 0) {
                    ans[offset]++;
                }
                pressing |= (1 << offset);
            }
            pressed = pressing;
            pressing = 0;
        }

        for (int subans: ans) {
            std::cout << subans << " ";
        }
        std::cout <<std::endl;
    }
}