#include <iostream>
#include <iomanip>

int main(){
    double n;
    std::cin >> n;

    double ans = n * 0.09144;
    
    std::cout << std::setprecision(10) << ans << std::endl;
}
