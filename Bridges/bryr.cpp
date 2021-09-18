#include <climits>
#include <cmath>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>

struct Compare {
    public:
        bool operator()(std::pair<int, int>& p1, std::pair<int, int>& p2) {
            return p1.second > p2.second;
        }
};

int main() {
    int n, m;
    std::cin >> n >> m;

    int u, v, w; // src, dest, weight
    std::vector<std::vector<std::pair<int, int>>> graph(n+1);

    for (int i=0; i<m; i++) {
        std::cin >> u >> v >> w;
        graph[u].push_back(std::make_pair(v, w));
        graph[v].push_back(std::make_pair(u, w));
    }

    std::vector<int> distance(n+1, INT_MAX);
    std::vector<bool> visited(n+1, false);
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int,int>>, Compare> pq; // distance minHeap
    pq.push(std::make_pair(1, 0));
    distance[1] = 0;

    while (!pq.empty()) {
        std::pair<int, int> node = pq.top();
        pq.pop();

        if (visited[node.first]) {
            continue;
        }

        visited[node.first] = true;

        for (std::pair<int, int> edge: graph[node.first]) {
            int dest = edge.first;
            int weight = edge.second;
            int dist = distance[node.first] + weight;
            if (!visited[dest] && dist < distance[dest]) {
                distance[dest] = dist;
                pq.push(std::make_pair(dest, dist));
            }
        }
    }

    std::cout << distance[n];
}