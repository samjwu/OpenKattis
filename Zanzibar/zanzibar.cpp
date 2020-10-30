#include <iostream>

int main() {
    int n;
    int prev, curr, import;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> prev;
        import = 0;

        while (std::cin >> curr) {
            if (curr == 0) {
                break;
            }
            
            if (curr > prev * 2) {
                import += curr - prev * 2;
            }
            prev = curr;
        }

        std::cout << import << std::endl;
    }

    return 0;
}