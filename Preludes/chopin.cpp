#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, std::string> equalNotes = {
        {"A#", "Bb"}, {"Bb", "A#"},
        {"C#", "Db"}, {"Db", "C#"},
        {"D#", "Eb"}, {"Eb", "D#"},
        {"F#", "Gb"}, {"Gb", "F#"},
        {"G#", "Ab"}, {"Ab", "G#"}
    };

    std::string note, tonality;
    int caseNum = 1;

    while (std::cin >> note >> tonality) {
        if (equalNotes.find(note) != equalNotes.end()) {
            std::cout << "Case " << caseNum << ": " << equalNotes[note] << " " << tonality << std::endl;
        } else {
            std::cout << "Case " << caseNum << ": " << "UNIQUE" << std::endl;
        }
        caseNum++;
    }
}