#include <iostream>
#include <string>
#include <set>
#include <vector>

int main() {
    std::vector<std::string> scales = {
        "A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"
    };
    std::vector<int> tones = {
        2, 4, 5, 7, 9, 11, 12
    };

    int n;
    std::cin >> n;
    std::string note;
    std::set<std::string> notes;
    for (int i=0; i<n; i++) {
        std::cin >> note;
        notes.insert(note);
    }

    std::vector<std::string> ans;
    for (int i=0; i<12; i++) {
        std::set<std::string> currScale;
        bool fits = true;
        for (int tone: tones) {
            currScale.insert(scales[(i+tone) % 12]);
        }
        for (std::string note: notes) {
            if (currScale.count(note) == 0) {
                fits = false;
                break;
            }
        }
        if (fits) {
            ans.push_back(scales[i]);
        }
    }

    if (ans.size() == 0) {
        std::cout << "none" << std::endl;
    } else {
        for (std::string s: ans) {
            std::cout << s << " ";
        }
    }
     
    return 0;
}