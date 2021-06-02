#include <iostream>

int main() {
    int n, k;
    std::cin >> n >> k;
    
    double score;
    double sum = 0;

    for (int i=0; i<k; i++) {
        std::cin >> score;
        sum += score;
    }
    
    std::cout << ((n-k)*(-3) + sum)/n << " " << ((n-k)*3 + sum)/n << std::endl;
}