#include <iostream>

int main() {
    int n;
    std::cin >> n;

    double a, b, c;
    for (int i=0; i<n; i++) {
        std::cin >> a >> b >> c;
        if (a+b==c || a-b==c || b-a==c || a*b==c || a/b==c || b/a== c) {
            std::cout << "Possible" << std::endl;
        } else {
            std::cout << "Impossible" << std::endl;
        }
    }
    
    return 0;
}