#include <iostream>
#include <map>
#include <sstream>
#include <string>

int main() {
    std::stringstream ss;
    std::string s, t, name, initials = "";
    std::map<std::string, std::string> order;
    int n, q;

    std::getline(std::cin, s);
    ss << s;
    ss >> t;
    n = std::stoi(t);
    ss >> t;
    q = std::stoi(t);
    ss.clear();
    ss.str("");

    for (int i = 0; i < n; i++) {
        std::getline(std::cin, name);
        ss << name;
        while (ss >> s) {
            initials += s[0];
        }
        ss.clear();
        ss.str("");

        if (order.find(initials) != order.end()) {
            order[initials] = "ambiguous";
        } else {
            order[initials] = name;
        }
        initials = "";
    }

    for (int i = 0; i < q; i++) {
        std::getline(std::cin, initials);

        if (order.find(initials) != order.end()) {
            std::cout << order[initials] << std::endl;
        } else {
            std::cout << "nobody" << std::endl;
        }
    }
}
