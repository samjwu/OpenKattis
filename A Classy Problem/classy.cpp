#include <algorithm>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

int main() {
    int t, n;
    std::string name, status, tok;
    std::unordered_map<std::string, std::vector<std::string>> map; // class to names
    std::set<std::string> classes;

    std::cin >> t;
    for (int i=0; i<t; i++) {
        std::cin >> n;
        for (int j=0; j<n; j++) {
            std::cin >> name >> status >> tok;

            std::string classStr;
            std::stringstream ss(status);
            while (std::getline(ss, tok, '-')) {
                if (tok.compare("upper") == 0) {
                    classStr.push_back('1');
                } else if (tok.compare("middle") == 0) {
                    classStr.push_back('2');
                } else if (tok.compare("lower") == 0) {
                    classStr.push_back('3');
                }
            }

            std::reverse(classStr.begin(), classStr.end());

            // higher levels of detail are assumed middle (up to 10th class)
            while (classStr.length() < 10) {
                classStr.push_back('2');
            }

            map[classStr].push_back(name.substr(0, name.length() - 1));
            classes.insert(classStr);
        }

        for (std::string cl: classes) {
            std::sort(map[cl].begin(), map[cl].end());
            
            for (std::string nam: map[cl]) {
                std::cout << nam << std::endl;
            }
        }

        std::cout << "==============================" << std::endl;

        map.clear();
        classes.clear();
    }
}