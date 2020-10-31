#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> names;
    std::string input;
    int n, end, set_num = 1;

    while (std::getline(std::cin, input)) {
        n = stoi(input);
        if (n == 0) {
            break;
        }

        names.clear();
        for (int i=0; i<n; i++) {
            std::getline(std::cin, input);
            names.push_back(input);
        }
        
        std::cout << "SET " << set_num << std::endl;
        for (int i=0; i<n; i+=2) {
            std::cout << names[i] << std::endl;
        }
        if (n%2 == 0) {
            end = n-1;
        } else {
            end = n-2;
        }
        for (int i=end; i>=1; i-=2) {
            std::cout << names[i] << std::endl;
        }
        set_num++;
    }
    
    return 0;
}