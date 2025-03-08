#include <iostream>
#include <string>

bool endsWith(std::string& s, std::string suffix) {
    int n = s.length();
    int m = suffix.length();
    
    if (m > n) {
        return false;
    }

    return s.substr(n - m) == suffix;
}

int main() {
    std::string s;

    std::getline(std::cin, s);

    if (endsWith(s, "eh?")) {
        std::cout << "Canadian!" << std::endl;
    } else {
        std::cout << "Imposter!" << std::endl;
    }
}
