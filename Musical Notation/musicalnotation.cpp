#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

int main() {
    std::vector<char> pitches = {
        'G','F','E','D','C','B','A','g','f','e','d','c','b','a'
    }; 
    std::set<char> staffs = {
        'F','D','B','g','e','a'
    };
    std::map<char, std::map<int, char>> notes;
    std::set<int> spaces;

    int n;
    std::string note;
    std::cin >> n;
    int time = 0;

    for (int i=0; i<n; i++) {
        std::cin >> note;

        int duration = 1;
        if (note.length() > 1) {
            duration = std::stoi(note.substr(1));
        }

        for (int j=0; j<duration; j++) {
            notes[note[0]][time] = '*';
            time++;
        }

        spaces.insert(time-1);
    }

    for (char pitch: pitches) {
        std::cout << pitch << ": ";

        for (int i=0; i<time; i++) {
            if (notes[pitch][i] == '*') {
                std::cout << '*';
            } else if (staffs.count(pitch) > 0) {
                std::cout << '-';
            } else {
                std::cout << ' ';
            }

            if (i != time-1 && spaces.count(i) > 0) {
                if (staffs.count(pitch) > 0) {
                    std::cout << '-';
                } else {
                    std::cout << ' ';
                }
            }
        }

        std::cout << std::endl;
    }
}