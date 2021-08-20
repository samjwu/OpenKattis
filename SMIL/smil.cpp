#include <iostream>
#include <string>

int main() {
    std::string line;
    std::cin >> line;

    int n = line.length();
    for (int i=0; i<n; i++) {
        if (line[i] == ':') {
            if (i+1 < n && line[i+1] == ')') {
                std::cout << i << std::endl;
                i++;
            } else if (i+2 < n && line[i+1] == '-' && line[i+2] == ')') {
                std::cout << i << std::endl;
                i += 2;
            }
        } else if (line[i] == ';') {
            if (i+1 < n && line[i+1] == ')') {
                std::cout << i << std::endl;
                i++;
            } else if (i+2 < n && line[i+1] == '-' && line[i+2] == ')') {
                std::cout << i << std::endl;
                i += 2;
            }
        }
    }
}