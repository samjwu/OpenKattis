#include <iostream>
#include <stack>
#include <string>

int main() {
    std::string line;
    std::getline(std::cin, line);
    int n = std::stoi(line);
    std::getline(std::cin, line);

    std::stack<char> stk;

    for (int i=0; i<n; i++) {
        if (line[i] == ' ') {
            continue;
        } else if (line[i] == '(' || line[i] == '[' || line[i] == '{') {
            stk.push(line[i]);
        } else if (line[i] == ')') {
            if (stk.empty() || stk.top() != '(') {
                std::cout << line[i] << " " << i;
                return 0;
            } else {
                stk.pop();
            }
        } else if (line[i] == ']') {
            if (stk.empty() || stk.top() != '[') {
                std::cout << line[i] << " " << i;
                return 0;
            } else {
                stk.pop();
            }
        } else { // }
            if (stk.empty() || stk.top() != '{') {
                std::cout << line[i] << " " << i;
                return 0;
            } else {
                stk.pop();
            }
        }
    }

    std::cout << "ok so far";
}