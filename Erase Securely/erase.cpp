#include <iostream>
#include <string>

int main() {
    int n;
    std::string before, after;

    std::cin >> n;
    std::cin >> before;
    std::cin >> after;

    int m = before.length();
    for (int i=0; i<m; i++) {
        if ((n%2 == 0 && before[i] != after[i]) || (n%2 == 1 && before[i] == after[i])) {
            std::cout << "Deletion failed" << std::endl;
            return 0;
        }
    }
    std::cout << "Deletion succeeded" << std::endl;
}