#include <iostream>

int main() {
    long long l, n;
    std::cin >> l >> n;
    
    int k = 1;

    // add 1 more roll while all current k rolls are not fully used (l % n > 0)
    while (l % n != 0) {
        // each ith roll (1 to k inclusive) not fully used leaves a remainder (l % n)
        // update usage n such that n = original n from input - sum of reminders for 1 to k rolls
        n = n - (l % n); 
        k += 1;
    }

    std::cout << k << std::endl;
}