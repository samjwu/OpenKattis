#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>

int main() {
    std::string line, word, op;
    int val;
    std::stringstream ss;
    std::unordered_map<std::string, int> defs;
    std::unordered_map<int, std::string> calcs;

    while (std::getline(std::cin, line)) {
        ss.clear();
        ss.str(line);

        ss >> word;

        if (word.compare("def") == 0) {
            ss >> word >> val;

            if (defs.find(word) != defs.end()) {
                calcs.erase(defs[word]);
            }

            defs[word] = val;
            calcs[val] = word;

        } else if (word.compare("calc") == 0) {
            bool found = true;
            int ans = 0;

            ss >> word;
            if (defs.find(word) == defs.end()) {
                found = false;
            } else {
                ans = defs[word];
            }

            while (ss >> op) {
                if (op.compare("=") == 0) {
                    break;
                } else if (op.compare("+") == 0) {
                    ss >> word;
                    if (defs.find(word) == defs.end()) {
                        found = false;
                    } else {
                        ans += defs[word];
                    }
                } else {
                    ss >> word;
                    if (defs.find(word) == defs.end()) {
                        found = false;
                    } else {
                        ans -= defs[word];
                    }
                }
            }

            if (found == true && calcs.find(ans) != calcs.end()) {
                std::cout << line.substr(5) << " " << calcs[ans] << std::endl;
            } else {
                std::cout << line.substr(5) << " unknown" << std::endl;
            }

        } else if (word.compare("clear") == 0) {
            defs.clear();
            calcs.clear();
        }
    }
}