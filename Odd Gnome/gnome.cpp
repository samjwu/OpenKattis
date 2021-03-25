#include <iostream>
#include <vector>

int wrongOrder(std::vector<int>& v) {
    for (int i=0; i<v.size()-1; i++) {
        if (v[i] != v[i+1] - 1) {
            return i+2;
        }
    }

    return -1;
}

int main() {
    int n;
    int g;
    int id;
    std::vector<int> v;
    int ans;

    std::cin >> n;
    for (int i=0; i<n; i++) {
        std::cin >> g;
        
        for (int j=0; j<g; j++) {
            std::cin >> id;
            v.push_back(id);
        }

        ans = wrongOrder(v);
        std::cout << ans << std::endl;
        v.clear();
    }
    
    return 0;
}