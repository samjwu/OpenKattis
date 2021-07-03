#include <iostream>
#include <set>
#include <string>
#include <vector>

class UnionFind {
public:
    UnionFind(int m, int n) {
        int elements = m*n;

        for (int i=0; i<m*n+1; i++) {
            parent.push_back(i);
        }
    }

    int find(int x) {
        if (x == parent[x]) {
            return x;
        }

        parent[x] = find(parent[x]);
        return parent[x];
    }

    void unify(int x, int y) {
        int parX = find(x);
        int parY = find(y);

        if (parX == parY) {
            return;
        }

        int newPar = std::min(parX, parY);
        parent[parX] = newPar;
        parent[parY] = newPar;
    }

private:
    std::vector<int> parent;
};

int main() {
    int m, n;
    std::string line;
    std::vector<std::string> grid;
    std::set<int> ans;

    std::cin >> m >> n;
    UnionFind uf(m, n);

    for (int i=0; i<m; i++) {
        std::cin >> line;
        grid.push_back(line);
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (grid[i][j] == 'L' || grid[i][j] == 'C') {
                if (i > 0 && (grid[i-1][j] == 'L' || grid[i-1][j] == 'C')) {
                    uf.unify(i*n + j, (i-1)*n + j);
                } 
                if (i < m-1 && (grid[i+1][j] == 'L' || grid[i+1][j] == 'C')) {
                    uf.unify(i*n + j, (i+1)*n + j);
                }
                if (j > 0 && (grid[i][j-1] == 'L' || grid[i][j-1] == 'C')) {
                    uf.unify(i*n + j, i*n + j-1);
                }
                if (j < n-1 && (grid[i][j+1] == 'L' || grid[i][j+1] == 'C')) {
                    uf.unify(i*n + j, i*n + j+1);
                }
            }
        }
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (grid[i][j] == 'L') {
                ans.insert(uf.find(i*n + j));
            }
        }
    }

    std::cout << ans.size();
}