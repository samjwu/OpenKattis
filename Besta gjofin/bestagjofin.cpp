#include <iostream>
#include <string>

int main() {
    int n;
    std::string name;
    int fun;

    int mostFun = -1;
    std::string best;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> name >> fun;

        if (fun > mostFun) {
            mostFun = fun;
            best = name;
        }
    }

    std::cout << best;
}
