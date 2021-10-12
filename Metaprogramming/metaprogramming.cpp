#include <iostream>
#include <map>
#include <string>

void eval(std::string s1, std::string s2, char op, std::map<std::string, int>& map) {
    if (map.find(s1) == map.end() || map.find(s2) == map.end()) {
        std::cout << "undefined" << std::endl;
        return;
    }
    
    if (op == '<') {
        if (map[s1] < map[s2]) {
            std::cout << "true" << std::endl;
        } else {
            std::cout << "false" << std::endl;
        }
    } else if (op == '>') {
        if (map[s1] > map[s2]) {
            std::cout << "true" << std::endl;
        } else {
            std::cout << "false" << std::endl;
        }
    } else { // =
        if (map[s1] == map[s2]) {
            std::cout << "true" << std::endl;
        } else {
            std::cout << "false" << std::endl;
        }
    }
}

int main() {
    std::string cmd, word, w1, w2;
    int num;
    char op;
    std::map<std::string, int> map;

    while (std::cin >> cmd) {
        if (cmd.compare("define") == 0) {
            std::cin >> num >> word;
            map[word] = num;
        } else { // eval
            std::cin >> w1 >> op >> w2;
            eval(w1, w2, op, map);
        }
    }
}