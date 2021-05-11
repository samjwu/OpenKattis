#include <climits>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

void backtrack(std::string& x, std::string subX, std::vector<bool>& used, std::vector<int>& perms) {
    if (subX.length() == x.length()) {
        if (std::stoi(subX) > std::stoi(x)) {
            perms.push_back(std::stoi(subX));
        }
        return;
    }

    for (int i=0; i<x.length(); i++) {
        if ((used[i]) || (i > 0 && x[i] == x[i-1] && !used[i-1])) {
            continue;
        }

        used[i] = true;
        subX.push_back(x[i]);
        backtrack(x, subX, used, perms);
        used[i] = false;
        subX.pop_back();
    }
}

int main() {
    std::string x, subX;
    std::cin >> x;
    std::vector<bool> used(x.length(), false);
    std::vector<int> perms;
    
    backtrack(x, "", used, perms);

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