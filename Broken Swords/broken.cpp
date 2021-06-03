#include <algorithm>
#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::string sword;
    int tb = n*2, lr = n*2;
    for (int i=0; i<n; i++) {
        std::cin >> sword;
        tb -= (sword[0] - '0') + (sword[1] - '0');
        lr -= (sword[2] - '0') + (sword[3] - '0');
    }

    int make = std::min(tb/2, lr/2);
    std::cout << make << " " << tb - make*2 << " " << lr - make*2;
}