#include <iostream>
#include <set>

int main() {
    int n, num;
    std::cin >> n;

    std::set<int> set;
    
    for (int i=0; i<n; i++) {
        std::cin >> num;
        set.insert(num);
    }

    for (int i=0; i<n-1; i++) {
        std::cin >> num;
        set.erase(num);
    }

    std::cout << *set.begin();
}