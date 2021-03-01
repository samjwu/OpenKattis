#include <iostream>

void printNums(int a, int b, int c, int d, int e) {
    std::cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << std::endl;
}

void swap(int& i, int& j) {
    int temp = i;
    i = j;
    j = temp;
}

int main() {
    int a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;
    
    if (a==1 && b==2 && c==3 && d==4 && e==5) {
        printNums(a, b, c, d, e);
    }
    
    while (a!=1 || b!=2 || c!=3 || d!=4 || e!=5) {
        if (a > b) {
            swap(a, b);
            printNums(a, b, c, d, e);
        }

        if (b > c) {
            swap(b, c);
            printNums(a, b, c, d, e);
        }

        if (c > d) {
            swap(c, d);
            printNums(a, b, c, d, e);
        }

        if (d > e) {
            swap(d, e);
            printNums(a, b, c, d, e);
        }
    }

    return 0;
}