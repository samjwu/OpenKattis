#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main(){
    std::string s;
    
    std::cin >> s;

    std::vector<std::string> v;
    std::stringstream ss(s);
    std::string part;
    
    while (std::getline(ss, part, '/')) {
        v.push_back(part);
    }

    int a = std::stoi(v[0]);
    int b = std::stoi(v[1]);

    if (a > 12) {
        std::cout << "EU";
    } else if (b > 12) {
        std::cout << "US";
    } else {
        std::cout << "either";
    }
}
