#include <algorithm>
#include <iostream>
#include <set>
#include <string>

int encode(std::string line, std::string macro) {
    int ans = 0;
    int m = macro.length();
    
    for (int i=0; i<line.length(); i++) {
        std::string sub = line.substr(i, m);
        if (sub.compare(macro) == 0) {
            i += m - 1;
        }

        ans++;
    }

    return ans + m;
}

int main() {
    std::string line;
    std::set<std::string> macros;
    std::cin >> line;
    int ans = line.length();
    int n = line.length();

    for (int i=0; i<n; i++) {
        for (int len=2; len<n/2; len++) {
            std::string macro = line.substr(i, len);
            macros.insert(macro);
        }
    }  

    for (std::string macro: macros) {
        ans = std::min(ans, encode(line, macro));
    }

    std::cout << ans <<std::endl;
}