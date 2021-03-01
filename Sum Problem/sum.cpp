#include <iostream>

int main() {
    int p, k, n;
    std::cin >> p;
    
    for (int i=0; i<p; i++) {
        std::cin >> k >> n;

        int num = 1;
        int lastnum = n * 2;
        int s1 = 0, s2 = 0, s3 = 0;
        while (num <= lastnum) {
            if (num <= n) {
                s1 += num;
            }
            
            if (num % 2 == 1) {
                s2 += num;
            } else {
                s3 += num;
            }

            num++;
        }

        std::cout << k << ' ' << s1 << ' ' << s2 << ' ' << s3 << std::endl;
    }


    return 0;
}