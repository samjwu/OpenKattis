#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    int n;
    double t1, t2, v1, v2;
    double area = 0;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> t2 >> v2;
        if (i==0) {
            t1 = t2;
            v1 = v2;
            continue;
        }
        area += (v2+v1)/2 * (t2-t1);
        t1 = t2;
        v1 = v2;
    }

    int p = (int) log10(area);
    std::cout << std::setprecision(p+6) << area/1000 << std::endl;

    return 0;
}