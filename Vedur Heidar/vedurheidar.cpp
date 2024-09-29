#include <iostream>
#include <string>

int main() {
    int v;
    int n;
    std::string s;
    int k;

    std::cin >> v >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> s >> k;

        if (k >= v) {
            std::cout << s << " opin" << std::endl;
        } else {
            std::cout << s << " lokud" << std::endl;
        }
    }
}
