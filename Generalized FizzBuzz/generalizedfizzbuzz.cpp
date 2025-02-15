#include <iostream>

int lcm(int a, int b) {
    int temp_a = a, temp_b = b;

    while (temp_a != temp_b) {
        if (temp_a > temp_b) {
            temp_a -= temp_b;
        } else {
            temp_b -= temp_a;
        }
    }

    return (a / temp_a) * b;
}

int main() {
    int n, a, b;
    std::cin >> n >> a >> b;
    
    int fizzbuzz = a != b ? n / lcm(a, b) : n / a;
    int fizz = a != b ? n / a - fizzbuzz : 0;
    int buzz = a != b ? n /b - fizzbuzz : 0;

    std::cout << fizz << ' ' << buzz << ' ' << fizzbuzz;
}
