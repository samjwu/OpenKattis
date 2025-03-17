#include <iostream>

int main() {
    int a, l;
    int n, kwf;
    long kernels = 0;

    for (int i = 0; i < 5; i++) {
        std::cin >> a >> l;
        kernels += a*l;
    }

    std::cin >> n >> kwf;
    int avg_kernels = kernels / 5;
    
    std::cout << n * avg_kernels / kwf;
}
