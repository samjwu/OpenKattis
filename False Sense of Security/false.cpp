#include <algorithm>
#include <iostream>
#include <string>
#include <map>

void convertToMorse(std::string& input, std::string& morse, std::string& numbers, std::map<std::string, std::string>& dict) {
    std::string translation;

    for (int i=0; i<input.length(); i++) {
        translation = dict[input.substr(i, 1)];
        morse.append(translation);
        numbers.append(std::to_string(translation.length()));
    }
}

std::string convertToEng(std::string& morse, std::string& numbers, std::map<std::string, std::string>& dict) {
    std::string decoded, block;
    int i = 0, codeLen;

    for (int j=0; j<numbers.length(); j++) {
        codeLen = numbers[j] - '0';
        block = morse.substr(i, codeLen);
        decoded.append(dict[block]);
        i += codeLen;
    }

    return decoded;
}

int main() {
    std::map<std::string, std::string> engToMorse = {
        {"A", ".-"},
        {"B", "-..."},
        {"C", "-.-."},
        {"D", "-.."},
        {"E", "."},
        {"F", "..-."},
        {"G", "--."},
        {"H", "...."},
        {"I", ".."},
        {"J", ".---"},
        {"K", "-.-"},
        {"L", ".-.."},
        {"M", "--"},
        {"N", "-."},
        {"O", "---"},
        {"P", ".--."},
        {"Q", "--.-"},
        {"R", ".-."},
        {"S", "..."},
        {"T", "-"},
        {"U", "..-"},
        {"V", "...-"},
        {"W", ".--"},
        {"X", "-..-"},
        {"Y", "-.--"},
        {"Z", "--.."},
        {"_", "..--"},
        {".", "---."},
        {",", ".-.-"},
        {"?", "----"}
    };

    std::map<std::string, std::string> morseToEng = {};
    for (auto pair: engToMorse) {
        morseToEng[pair.second] = pair.first;
    }

    std::string input, morse, numbers, decoded;

    while (std::getline(std::cin, input)) {
        morse = "";
        numbers = "";
        
        convertToMorse(input, morse, numbers, engToMorse);
        // std::cout << morse << std::endl;
        std::reverse(numbers.begin(), numbers.end());
        decoded = convertToEng(morse, numbers, morseToEng);

        std::cout << decoded << std::endl;
    }
}