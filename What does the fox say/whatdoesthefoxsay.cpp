#include <iostream>
#include <set>
#include <sstream>
#include <string>

int main() {
    std::string line, soundLine, word;
    std::stringstream ss;
    std::set<std::string> sounds;
    std::getline(std::cin, line);
    int n = std::stoi(line);

    for (int i=0; i<n; i++) {
        std::getline(std::cin, soundLine);
        std::getline(std::cin, line);
        while (line.compare("what does the fox say?") != 0) {
            ss.str(line);
            while (ss >> word) {}
            ss.clear();
            sounds.insert(word);
            std::getline(std::cin, line);
        }
        
        ss.str(soundLine);
        while (ss >> word) {
            if (sounds.find(word) == sounds.end()) {
                std::cout << word << " ";
            }
        }
        ss.clear();
        std::cout << std::endl;

        line.clear();
        sounds.clear();
    }
}