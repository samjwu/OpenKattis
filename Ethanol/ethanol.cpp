#include <iostream>
#include <string>

void repeatStr(int n, std::string s) {
    for (int i = 0; i < n; i++) {
        std::cout << s;
    }
}

int main() {
    int n;
    std::cin >> n;
    
    std::cout << "  ";
    repeatStr(n, "H ");
    std::cout << std::endl << "  ";
    repeatStr(n, "| ");
    std::cout << std::endl << "H-";
    repeatStr(n, "C-");
    std::cout << "OH" << std::endl << "  ";
    repeatStr(n, "| ");
    std::cout << std::endl << "  ";
    repeatStr(n, "H ");
}
