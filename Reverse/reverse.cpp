#include <iostream>
#include <vector>

int main() {
    int n;
    std::vector<int> inputs;
    std::cin >> n;

    int input;
    for (int i=0; i<n; i++) {
        std::cin >> input;
        inputs.push_back(input);
    }

    for (int i=n-1; i>=0; i--) {
        std::cout << inputs[i] << std::endl;
    }
    
    return 0;
}