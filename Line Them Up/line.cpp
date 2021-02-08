#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::string input, ans;
    std::vector<std::string> unsorted, sorted;
    for (int i = 0; i < n; i++) {
        std::cin >> input;
        unsorted.push_back(input);
        sorted.push_back(input);
    }

    std::sort(sorted.begin(), sorted.end());

    int i = 0;
    while (i < n && unsorted[i].compare(sorted[i]) == 0) {
        i++;
    }

    if (i == n) {
        std::cout << "INCREASING" << std::endl;
        return 0;
    }

    i = 0;
    int j = n-1;
    while (i < n && unsorted[i].compare(sorted[j]) == 0) {
        i++;
        j--;
    }

    if (i == n) {
        std::cout << "DECREASING" << std::endl;
        return 0;
    }
    
    std::cout << "NEITHER" << std::endl;
     
    return 0;
}