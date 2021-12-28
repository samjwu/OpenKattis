#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int main() {
    int n;
    std::string line, src, dest;
    std::map<std::string, std::set<std::string>> graph;
    
    std::getline(std::cin, line);
    n = std::stoi(line);

    for (int i=0; i<n; i++) {
        std::getline(std::cin, line);

        std::stringstream ss(line);
        
        ss >> src;
        while (ss >> dest) {
            graph[src].insert(dest);
            graph[dest].insert(src);
        }
    }

    std::cin >> src >> dest;

    std::map<std::string, std::string> prevStations;
    prevStations[src] = "N/A";

    std::queue<std::string> q;
    q.push(src);
    while (!q.empty()) {
        std::string currStation = q.front();
        q.pop();

        for (auto next: graph[currStation]) {
            if (prevStations.find(next) == prevStations.end()) {
                prevStations[next] = currStation;
                q.push(next);
            }
        }
    }

    if (prevStations.find(dest) == prevStations.end()) {
        std::cout << "no route found";
        return 0;
    }

    std::vector<std::string> ans;
    std::string currStation = dest;
    while (currStation != "N/A") {
        ans.push_back(currStation);
        currStation = prevStations[currStation];
    }

    std::reverse(ans.begin(), ans.end());

    for (auto str: ans) {
        std::cout << str << " ";
    }
}