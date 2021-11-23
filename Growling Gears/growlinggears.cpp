#include <climits>
#include <iostream>

int main() {
    int t, n;
    double a, b, c, x, torque;
    std::cin >> t;

    for (int i=0; i<t; i++) {
        std::cin >> n;
        double bestGear, maxTorque = INT_MIN;

        for (int j=0; j<n; j++) {
            std::cin >> a >> b >> c;

            // 1st derivative of -ax^2+bx+c: -2ax+b
            // maximum at -2ax+b=0 => x = -b/2a
            x = b / (2*a);
            torque = -a * x * x + b * x + c;

            if (torque > maxTorque) {
                maxTorque = torque;
                bestGear = j+1;
            }
        }

        std::cout << bestGear << std::endl;
    }
}