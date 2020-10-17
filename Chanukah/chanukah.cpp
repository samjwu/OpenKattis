#include <iostream>
#include <string>

int main() {
    std::string input;
    getline(std::cin, input);
    int p = stoi(input);
    
    int k, n;
    for (int i=0; i<p; i++) {
        getline(std::cin, input, ' ');
        k = stoi(input);
        getline(std::cin, input);
        n = stoi(input);
        
        int candles = 0;
        for (int j=1; j<=n; j++) {
            candles += j;
        }
        std::cout << k << " " << candles+n << std::endl;
    }

    return 0;
}