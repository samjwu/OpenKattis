#include <iostream>
#include <vector>

std::vector<bool> sieveOfEratosthenes(int n) {
    std::vector<bool> prime(n + 1, true);

    prime[0] = false;
    prime[1] = false;

    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }

    return prime;
}

int main() {
    std::vector<bool> prime = sieveOfEratosthenes(1000);
    
    int count = 0;
    int index = 0;
    while (count < 100) {
        if (prime[index]) {
            std::cout << index << std::endl;
            count++;
        }
        index++;
    }
}
