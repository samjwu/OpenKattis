#include <cmath>
#include <iostream>
#include <iomanip>

int main(){
    int p, a, b, c, d, n;
    double low = -1, high = -1, ans = 0;
    std::cin >> p >> a >> b >> c >> d >> n;
    
    for (int i=1; i<=n; i++) {
        double curr = p * (std::sin(a*i +b) + std::cos(c*i + d) + 2);

        if (curr > high) {
            high = curr;
            low = -1; // reset
        }

        if (curr < low || low == -1) {
            low = curr;
        }

        ans = std::max(ans, high - low);
    }
    
    std::cout << std::setprecision(10) << ans << std::endl;
}