#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string input, output;
    getline(std::cin, input);
    
    std::unordered_map<char, std::string> newAlpha = {
        {'a', "@"},
        {'b', "8"},
        {'c', "("},
        {'d', "|)"},
        {'e', "3"},
        {'f', "#"},
        {'g', "6"},
        {'h' ,"[-]"},
        {'i', "|"},
        {'j', "_|"},
        {'k', "|<"},
        {'l', "1"},
        {'m', "[]\\/[]"},
        {'n', "[]\\[]"},
        {'o', "0"},
        {'p', "|D"},
        {'q', "(,)"},
        {'r', "|Z"},
        {'s', "$"},
        {'t', "']['"},
        {'u', "|_|"},
        {'v', "\\/"},
        {'w', "\\/\\/"},
        {'x', "}{"},
        {'y', "`/"},
        {'z', "2"},
    };

    for (char ch: input) {
        char c = tolower(ch);
        if (c >= 'a' && c <= 'z') {
            output.append(newAlpha[c]);
        } else {
            output.push_back(c);
        }
    }

    std::cout << output << std::endl;

    return 0;
}