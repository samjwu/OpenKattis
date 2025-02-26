#include <iostream>
#include <vector>

int main() {
    int n, m, t;
    std::vector<int> values(6);
    int mostRepeats = 0;
    
    std::cin >> n >> m;

    for (int i = 0; i < n; i++) {
        std::cin >> t;
        values[t-1] += 1;
        
        if (values[t-1] > mostRepeats) {
            mostRepeats = values[t-1];
        }
    }

    if (mostRepeats + m >= n) {
        std::cout << "Ja";
    } else {
        std::cout << "Nej";
    }
}
