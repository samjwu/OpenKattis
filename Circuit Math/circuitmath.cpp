#include <iostream>
#include <stack>
#include <vector>

int main() {
    int n;
    char c;

    std::cin >> n;
    std::vector<bool> v(n);

    for (int i=0; i<n; i++) {
        std::cin >> c;
        if (c == 'T') {
            v[i] = true;
        }
    }

    std::stack<bool> stk;
    while (std::cin >> c) {
        if (c >= 'A' && c <= 'Z') {
            stk.push(v[c-'A']);
        } else if (c == '*') {
            bool x = stk.top();
            stk.pop();
            bool y = stk.top();
            stk.pop();
            stk.push(x && y);
        } else if (c == '+') {
            bool x = stk.top();
            stk.pop();
            bool y = stk.top();
            stk.pop();
            stk.push(x || y);
        } else { // -
            bool top = stk.top();
            stk.pop();
            stk.push(!top);
        }
    }

    bool ans = stk.top();
    if (ans) {
        std::cout << "T";
    } else {
        std::cout << "F";
    }
}