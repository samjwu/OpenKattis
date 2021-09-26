#include <iostream>
#include <stack>
#include <string>

int main() {
    std::string line;
    std::getline(std::cin, line);
    int n = std::stoi(line);
    std::stack<char> stk;
    bool failed = false;

    for (int i=0; i<n; i++) {
        std::getline(std::cin, line);
        for (char c: line) {
            if (c == '.') {
                continue;
            } else if (c == 't') {
                if (!stk.empty() && stk.top() == '|') {
                    stk.pop();
                } else {
                    failed = true;
                    break;
                }
            } else if (c == 'j') {
                if (!stk.empty() && stk.top() == '*') {
                    stk.pop();
                } else {
                    failed = true;
                    break;
                }
            } else if (c == 'b') {
                if (!stk.empty() && stk.top() == '$') {
                    stk.pop();
                } else {
                    failed = true;
                    break;
                }
            } else { // (c == '$' || c == '|' || c == '*')
                stk.push(c);
            }
        }

        if (failed || !stk.empty()) {
            std::cout << "NO" << std::endl;
        } else {
            std::cout << "YES" << std::endl;
        }

        while (!stk.empty()) {
            stk.pop();
        }
        failed = false;
    }
}