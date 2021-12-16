#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void reflectVertical(std::vector<std::string>& v) {
    for (auto& s: v) {
        std::reverse(s.begin(), s.end());
    }
}

// rotation 90 clockwise equal to two reflections:
// 1. reflect matrix by backwards diagonal line down the middle (\)
// 2. reflect matrix by vertical line down the middle
std::vector<std::string> rotate90clockwise(std::vector<std::string>& v, int maxLen, int n) {
    std::vector<std::string> rv;
    rv.resize(maxLen);
    for (auto& s: rv) {
        s.resize(n);
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<maxLen; j++) {
            rv[j][i] = v[i][j];
        }
    }

    reflectVertical(rv);
    
    return rv;
}

int main() {
    std::string line;
    int n;
    bool first = true;

    while (std::getline(std::cin, line)) {
        n = std::stoi(line);
        if (n == 0) {
            break;
        }

        if (!first) {
            std::cout << std::endl;
        } else {
            first = false;
        }

        std::vector<std::string> v;
        for (int i=0; i<n; i++) {
            std::getline(std::cin, line);
            v.push_back(line);
        }

        // use space char to fill empty space in v
        int maxLen = 0;
        for (auto& s: v) {
            maxLen = std::max(maxLen, (int) s.length());
        }
        for (auto& s: v) {
            s.resize(maxLen, ' ');
        }

        std::vector<std::string> rv = rotate90clockwise(v, maxLen, n);

        // replace special characters
        for (auto& s: rv) {
            for (auto& c: s) {
                if (c == '|') {
                    c = '-';
                } else if (c == '-') {
                    c = '|';
                }
            }
        }

        // remove end spaces
        for (auto& s: rv) {
            while (s.back() == ' ') {
                s.pop_back();
            }
            std::cout << s << std::endl;
        }
    }
}