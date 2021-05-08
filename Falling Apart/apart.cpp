#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n, a;
    std::vector<int> pieces;
    int alice = 0, bob = 0;

    std::cin >> n;
    for (int i=0; i<n; i++) {
        std::cin >> a;
        pieces.push_back(a);
    }

    std::sort(pieces.rbegin(), pieces.rend());

    for (int i=0; i<pieces.size(); i++) {
        if (i % 2 == 0) {
            alice += pieces[i];
        } else {
            bob += pieces[i];
        }
    }
    
    std::cout << alice << " " << bob << std::endl;
}