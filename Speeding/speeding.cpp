#include <iostream>

int main() {
    int n = 0;
    int t1, t2, d1, d2;
    int speed;

    std::cin >> n;
    std::cin >> t1 >> d1;
    std::cin >> t2 >> d2;
    speed = (d2-d1)/(t2-t1);

    for (int i=0; i<n-2; i++) {
        t1 = t2;
        d1 = d2;
        std::cin >> t2 >> d2;
        speed = std::max(speed, (d2-d1)/(t2-t1));
    }

    std::cout << speed << std::endl;
    
    return 0;
}