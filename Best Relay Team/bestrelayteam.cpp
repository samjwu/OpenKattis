#include <algorithm>
#include <climits>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::string name;
    double slow, fast;
    std::vector<std::pair<std::string, double>> slowSpeeds, fastSpeeds;

    for (int i=0; i<n; i++) {
        std::cin >> name >> slow >> fast;
        slowSpeeds.push_back(std::make_pair(name, slow));
        fastSpeeds.push_back(std::make_pair(name, fast));
    }

    std::sort(slowSpeeds.begin(), slowSpeeds.end(), [](std::pair<std::string, double> p1, std::pair<std::string, double> p2) {
        return p1.second < p2.second;
    });

    std::sort(fastSpeeds.begin(), fastSpeeds.end(), [](std::pair<std::string, double> p1, std::pair<std::string, double> p2) {
        return p1.second < p2.second;
    });

    std::string firstLeg;
    std::vector<std::string> ans, candidate;
    double best = INT_MAX, time;

    for (int i=0; i<4; i++) {
        firstLeg = slowSpeeds[i].first;
        time = slowSpeeds[i].second;
        candidate.clear();
        candidate.push_back(firstLeg);

        int j = 0;
        while (candidate.size() < 4) {
            if ((fastSpeeds[j].first).compare(firstLeg) != 0) {
                time += fastSpeeds[j].second;
                candidate.push_back(fastSpeeds[j].first);
            }
            j++;
        }

        if (time < best) {
            best = time;
            ans = candidate;
        }
    }

    std::cout << best << std::endl;
    for (std::string runner: ans) {
        std::cout << runner << std::endl;
    }
}