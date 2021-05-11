#include <climits>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

void permute(std::string s, int& ans, int l, int r, std::vector<int>& perms) {
    if (l == r) {
        if (std::stoi(s) > ans) {
            perms.push_back(std::stoi(s));
        }
    }

    for (int i=l; i<=r; i++) {
        std::swap(s[i], s[l]);
        permute(s, ans, l+1, r, perms);
        std::swap(s[i], s[l]);
    }
}

int main() {
    std::string x, subX;
    std::cin >> x;
    int ans = std::stoi(x);
    std::vector<int> perms;

    permute(x, ans, 0, x.length()-1, perms);

    if (perms.size() == 0) {
	    std::cout << 0 << std::endl;
    } else {
        int next = INT_MAX;
        for (int i=0; i<perms.size(); i++) {
            next = std::min(next, perms[i]);
        }
        std::cout << next << std::endl;
    }
}