#include <iostream>
#include <string>
#include <vector>
#include <utility>

void revStr(std::string& s, int len) {
    for (int i=0; i<len/2; i++) {
        std::swap(s[i], s[len-1-i]);
    }
}

void revAns(std::vector<std::string>& ans, int rows) {
    for (int i=0; i<rows/2; i++) {
        std::swap(ans[i], ans[rows-1-i]);
    }
}

int main() {
    std::vector<std::string> ans;
    int n, r, c;
    std::string input;

    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> r >> c;

        for (int j=0; j<r; j++) {
            std::cin >> input;
            revStr(input, c);
            ans.push_back(input);
        }

        revAns(ans, r);
        
        std::cout << "Test " << i+1 << std::endl;

        for (int j=0; j<r; j++) {
            std::cout << ans[j] << std::endl;
        }

        ans.clear();
    }
 
    return 0;
}