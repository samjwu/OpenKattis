#include <iostream>
#include <string>

int main() {
    std::string line, ans;
    std::cin >> line;

    for (char c: line) {
        if (c == '<') {
            ans.pop_back();
        } else {
            ans.push_back(c);
        }
    }

    std::cout << ans;
}