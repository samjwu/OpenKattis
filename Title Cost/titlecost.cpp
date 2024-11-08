#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>

int main(){
    std::string s;
    double c;

    std::cin >> s >> c;

    double ans = c;
    if (s.length() < c) {
        ans = s.length();
    }
    
    std::cout << std::setprecision(10) << ans << std::endl;
}
