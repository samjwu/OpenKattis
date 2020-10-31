#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> names;
    std::string input;
    int n, set_num = 1;

    while (std::getline(std::cin, input)) {
        n = stoi(input);
        if (n == 0) {
            break;
        }

        std::cout << "SET " << set_num << std::endl;
        set_num++;
        
        names.clear();
        for (int i=0; i<n; i++) {
            std::getline(std::cin, input);
            if (i%2 == 1) {
                names.push_back(input);
            } else {
                std::cout << input << std::endl;
            }
        }
        for (int i=names.size()-1; i>=0; i--) {
            std::cout << names[i] << std::endl;
        }
    }
    
    return 0;
}