#include <cmath>
#include <iostream>

using namespace std;

int main() {
    double x1, y1, x2, y2, p;
    double ans;
    cout.precision(10);
    
    cin >> x1;
    while (x1 != 0) {
        cin >> y1 >> x2 >> y2 >> p;
        
        ans = pow(pow(abs(x1-x2), p) + pow(abs(y1-y2), p), 1.0/p);
        
        cout << ans << endl;

        cin >> x1;
    }
     
    return 0;
}