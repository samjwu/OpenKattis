#include <iostream>
#include <string>

int main() {
    int n;
    std::string input;
    
    std::cin >> n;
    for (int i=0; i<n; i++) {
        std::cin >> input;
        if (input.compare("mumble") == 0) {
            continue;
        }
        if (std::stoi(input) != i+1) {
            std::cout << "something is fishy" << std::endl;
            return 0;
        }
    }

    std::cout << "makes sense" << std::endl;
}