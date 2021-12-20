#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main() {
    int pm = 12 * 60;

    int n, h, m;
    char colon;
    std::string z;
    std::vector<int> times;
    std::unordered_map<int, std::string> map;

    while (std::cin >> n) {
        if (n == 0) {
            break;
        }

        for (int i=0; i<n; i++) {
            std::cin >> h >> colon >> m >> z;
            
            std::string min = std::to_string(m);
            if (min.length() == 1) {
                min.insert(0, 1, '0');
            }
            std::string timeStr = std::to_string(h) + ":" + min + " " + z;
            
            h %= 12; // treat 12am equal to 0 minutes, and 12pm equal to 720 minutes
            int time = h*60 + m;
            if (z.compare("p.m.") == 0) {
                time += pm;
            }

            times.push_back(time);
            
            map[time] = timeStr;
        }

        std::sort(times.begin(), times.end());

        for (int j=0; j<times.size(); j++) {
            std::cout << map[times[j]] << std::endl;
        }

        std::cout << std::endl;

        times.clear();
    }
}