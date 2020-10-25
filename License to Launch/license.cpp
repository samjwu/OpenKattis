#include <climits>
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int junk;
    int min_junk = INT_MAX;
    int min_day;
    for (int i=0; i<n; i++) {
        std::cin >> junk;
        if (junk < min_junk) {
            min_junk = junk;
            min_day = i;
        }
    }
    
    std::cout << min_day << std::endl;
     
    return 0;
}