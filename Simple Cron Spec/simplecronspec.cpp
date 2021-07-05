#include <iostream>
#include <sstream>
#include <string>
#include <unordered_set>
#include <vector>

std::vector<int> formatStr(std::string s) {
    std::vector<int> ans;

    std::stringstream ss(s);

    while (ss.good()) {
        std::string subStr;
        std::getline(ss, subStr, ',');
        std::size_t hyphen = subStr.find('-');

        if (hyphen != std::string::npos) {
            int start = std::stoi(subStr.substr(0, hyphen));
            int end = std::stoi(subStr.substr(hyphen+1));

            for (int i=start; i<=end; i++) {
                ans.push_back(i);
            }
        } else {
            ans.push_back(std::stoi(subStr));
        }
    }

    return ans;
}

int main() {
    std::unordered_set<int> jobStarts;
    int totalStarts = 0;

    int n; 
    std::cin >> n;

    std::string h, m, s;

    for (int i=0; i<n; i++) {
        std::cin >> h >> m >> s;

        std::vector<int> hours, mins, secs;

        if (h.compare("*") == 0) {
            hours = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
        } else {
            hours = formatStr(h);
        }

        if (m.compare("*") == 0) {
            mins = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,
                24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,
                45,46,47,48,49,50,51,52,53,54,55,56,57,58,59};
        } else {
            mins = formatStr(m);
        }

        if (s.compare("*") == 0) {
            secs = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,
                24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,
                45,46,47,48,49,50,51,52,53,54,55,56,57,58,59};
        } else {
            secs = formatStr(s);
        }

        int startTime = 0;
        for (int hour: hours) {
            for (int min: mins) {
                for (int sec: secs) {
                    startTime = hour*3600 + min*60 + sec;
                    jobStarts.insert(startTime);
                    totalStarts++;
                }
            }
        }
    }

    std::cout << jobStarts.size() << " " << totalStarts;
}