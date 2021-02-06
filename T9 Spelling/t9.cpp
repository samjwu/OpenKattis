#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<char, std::string> map = {
        {'a',"2"},
        {'b',"22"},
        {'c',"222"},
        {'d',"3"},
        {'e',"33"},
        {'f',"333"},
        {'g',"4"},
        {'h',"44"},
        {'i',"444"},
        {'j',"5"},
        {'k',"55"},
        {'l',"555"},
        {'m',"6"},
        {'n',"66"},
        {'o',"666"},
        {'p',"7"},
        {'q',"77"},
        {'r',"777"},
        {'s',"7777"},
        {'t',"8"},
        {'u',"88"},
        {'v',"888"},
        {'w',"9"},
        {'x',"99"},
        {'y',"999"},
        {'z',"9999"},
        {' ',"0"}
    };

    std::string input;
    getline(std::cin, input);
    int n = stoi(input);

    std::string output;
    for (int i=0; i<n; i++) {
        getline(std::cin, input);
        std::cout << "Case #" << i+1 << ": ";

        for (char c : input) {
            if (output.back() == map[c][0]) {
                output.push_back(' ');
            }
            output += map[c];
        }

        std::cout << output << std::endl;
        output.clear();
    }

    return 0;
}