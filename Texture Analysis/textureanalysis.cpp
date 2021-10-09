#include <iostream>
#include <string>

int main() {
    std::string line;
    int t = 0;

    while (std::getline(std::cin, line)) {
        if (line.compare("END") == 0) {
            break;
        }

        int i = 1;
        int white = 0;
        while (line[i] == '.') {
            white++;
            i++;
        }

        i = 0;
        int n = line.length();
        bool even = true;
        while (i < n) {
            if (!even) {
                break;
            }
            if (line[i] != '*') {
                even = false;
                break;
            }
            i++;
            if (i >= n) {
                break;
            }
            for (int j=0; j<white; j++) {
                if (line[i] != '.') {
                    even = false;
                    break;
                }
                i++;
            }
        }

        t++;
        if (even) {
            std::cout << t << " EVEN" << std::endl;
        } else {
            std::cout << t << " NOT EVEN" << std::endl;
        }
    }
}