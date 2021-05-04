#include <iostream>
#include <vector>

bool eval(int a, int b, int c, char op) {
    if (op == '+') {
        return a+b == c;
    } else if (op == '-') {
        return a-b == c;
    } else if (op == '*') {
        return a*b == c;
    } else {
        return a/b == c;
    }
    
    return false;
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    std::vector<char> ops = {'+', '-', '*', '/'};
    for (int i=0; i<4; i++) {
        if (eval(a, b, c, ops[i])) {
            std::cout << a << ops[i] << b << '=' << c << std::endl;
            break;
        } else if (eval(b, c, a, ops[i])) {
            std::cout << a << '=' << b << ops[i] << c << std::endl;
            break;
        }
    }

	return 0;
}