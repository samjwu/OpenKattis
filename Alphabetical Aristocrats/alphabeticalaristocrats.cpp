#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

std::string startFromCapital(const std::string &name) {
    for (size_t i = 0; i < name.size(); i++) {
        if (std::isupper(name[i])) {
            return name.substr(i);
        }
    }

    return name;
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    int n = std::stoi(s);
    
    std::vector<std::string> names(n);
    for (int i = 0; i < n; ++i) {
        std::getline(std::cin, names[i]);
    }
    
    std::sort(names.begin(), names.end(), [](const std::string &a, const std::string &b) {
        return startFromCapital(a) < startFromCapital(b);
    });
    
    for (const auto &name : names) {
        std::cout << name << std::endl;
    }
    
    return 0;
}
