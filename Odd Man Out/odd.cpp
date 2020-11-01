#include <iostream>
#include <unordered_set>

int main() {
    int case_num = 0;
    int n, g, c;
    std::unordered_set<int> single;
    std::cin >> n;
    
    for (int i=0; i<n; i++) {
        std::cin >> g;
        
        single.clear();
        for (int j=0; j<g; j++) {
            std::cin >> c;
            if (single.count(c) == 0) {
                single.insert(c);
            } else {
                single.erase(c);
            }
        }
        case_num++;

        std::cout << "Case #" << case_num << ": " << *single.begin() << std::endl;
    }

    return 0;
}