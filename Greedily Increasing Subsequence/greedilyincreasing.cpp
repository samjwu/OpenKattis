#include <iostream>
#include <vector>

int main() {
    int n, a, prev = -1;
    std::cin >> n;

    std::vector<int> ans;
    for (int i=0; i<n; i++) {
        std::cin >> a;
        if (a > prev) {
            ans.push_back(a);
            prev = a;
        }
    }

    std::cout << ans.size() << std::endl;
    for (int i=0; i<ans.size(); i++) {   
        std::cout << ans[i] << " ";
    }
}