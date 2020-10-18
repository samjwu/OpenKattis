#include <iostream>
#include <string>

int main() {
    std::string line1, line2;
    std::getline(std::cin, line1);
    int n = std::stoi(line1);
    
    std::string ans = "";
    for (int i=0; i<n; i++) {
        std::getline(std::cin, line1);
        std::getline(std::cin, line2);
        for (int j=0; j<line1.length(); j++) {
            if (line1[j] == line2[j]) {
                ans.push_back('.');
            } else {
                ans.push_back('*');
            }
        }
        std::cout << line1 << std::endl;
        std::cout << line2 << std::endl;
        std::cout << ans << std::endl << std::endl;
        ans.clear();
    }

    
    return 0;
}