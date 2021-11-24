#include <climits>
#include <cmath>
#include <iostream>
#include <vector>

// get index of closest (unvisited) point
int closestPoint(int n, std::vector<double>& dists, std::vector<bool>& visited) {
    int minDist = INT_MAX;
    int minIdx = -1;

    for (int v=0; v<n; v++) {
        if (dists[v] < minDist && visited[v] == false) {
            minDist = dists[v];
            minIdx = v;
        }
    }

    return minIdx;
}

void dijkstra(int n, std::vector<std::vector<double>>& graph, int start) {
    std::vector<bool> visited(n, false);
    std::vector<double> dists(n, INT_MAX);
    dists[start] = 0;

    for (int i=0; i<n; i++) {
        int u = closestPoint(n, dists, visited);
        visited[u] = true;
        for (int v=0; v<n; v++) {
            if (graph[u][v] > 0 && visited[v] == false && dists[v] > dists[u] + graph[u][v]) {
                dists[v] = dists[u] + graph[u][v];
            }
        }
    }

    std::cout << dists[n-1];
}

int main() {
    double startX, startY, goalX, goalY;
    int n;
    double x, y;
    std::vector<std::vector<double>> points;
    
    std::cin >> startX >> startY >> goalX >> goalY;
    std::cin >> n;

    std::vector<std::vector<double>> graph(n+2, std::vector<double>(n+2));

    points.push_back({startX, startY});
    for (int i=0; i<n; i++) {
        std::cin >> x >> y;
        points.push_back({x, y});
    }
    points.push_back({goalX, goalY});

    for (int i=0; i<n+2; i++) {
        for (int j=i; j<n+2; j++) {
            if (i == j) {
                // same points have zero distance
                graph[i][j] = 0;
            } else if (i == 0 || j == 0) {
                // run from start to cannon at 5m/s
                double dist = std::sqrt(std::pow(points[i][0] - points[j][0], 2) + std::pow(points[i][1] - points[j][1], 2));
                graph[i][j] = dist / 5;
                graph[j][i] = dist / 5;
            } else {
                // find fastest way to travel between point i and j
                double cost = 0;
                double dist = std::sqrt(std::pow(points[i][0] - points[j][0], 2) + std::pow(points[i][1] - points[j][1], 2));
                if (dist >= 50) {
                    // 2s by cannon, remaining distance by running 5m/s
                    cost = 2 + (dist - 50) / 5;
                } else if (dist >= 30) {
                    // 30m at 5m/s = 6s
                    // 2s by cannon leaves 4s for running = 4s * 5m/s = 20m
                    // thus if distance is in range (50-20, 50) or (30, 50), it is faster to travel by cannon and then run a bit
                    cost = 2 + (50 - dist) / 5;
                } else {
                    cost = dist / 5;
                }
                graph[i][j] = cost;
                graph[j][i] = cost;
            }
        }
    }

    dijkstra(n+2, graph, 0);
}