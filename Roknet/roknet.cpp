#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>

int main() {
    int n;
    std::string s, word, name, val, input1, input2;
    std::stringstream ss;
    std::unordered_map<std::string, bool> vars;
    std::unordered_map<std::string, bool> translation = {
        {"SATT", true}, 
        {"OSATT", false}
    };
    std::unordered_map<bool, std::string> conversion = {
        {true, "SATT"},
        {false, "OSATT"}
    };

    std::getline(std::cin, s);
    n = std::stoi(s);

    for (int i = 0; i < n; i++) {
        std::getline(std::cin, s);
        
        ss.clear();
        ss.str(s);

        ss >> word;

        if (word == "INNTAK") {
            ss >> name >> val;
            vars[name] = translation[val];
        } else if (word == "UTTAK") {
            ss >> input1;
            std::cout << input1 << " " << conversion[vars[input1]] << std::endl;
        } else if (word == "OG") {
            ss >> input1 >> input2 >> name;
            vars[name] = vars[input1] && vars[input2];
        } else if (word == "EDA") {
            ss >> input1 >> input2 >> name;
            vars[name] = vars[input1] || vars[input2];
        } else if (word == "EKKI") {
            ss >> input1 >> name;
            vars[name] = !vars[input1];
        }
    }
}
