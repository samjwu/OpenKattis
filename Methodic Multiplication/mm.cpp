#include <iostream>
#include <string>

std::string mult(std::string x, std::string y) {
    if (x.compare("0") == 0 || y.compare("0") == 0) {
        return "0";
    }

    // x*y = # of S in x * # of S in y
    int nSx = (x.length() - 1) / 3;
    int nSy = (y.length() - 1) / 3;
    
    std::string ans;
    for (int i=0; i<nSx*nSy; i++) {
        ans.append("S(");
    }
    ans.push_back('0');
    for (int i=0; i<nSx*nSy; i++) {
        ans.push_back(')');
    }

    return ans;
}

int main() {
    std::string x, y;
    std::cin >> x >> y;

    std::string output = mult(x, y);
    std::cout << output << std::endl;

    return 0;
}