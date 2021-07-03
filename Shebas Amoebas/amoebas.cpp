#include <cmath>
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
    std::set<int> ans;
    int m, n;
    std::string line;
    std::vector<std::string> dish;

    std::cin >> m >> n;
    UnionFind uf(m, n);

    for (int i=0; i<m; i++) {
        std::cin >> line;
        dish.push_back(line);
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (dish[i][j] == '#') {
                if (i > 0 && dish[i-1][j] == '#') {
                    uf.unify(i*n + j, (i-1)*n + j);
                } 
                if (i < m-1 && dish[i+1][j] == '#') {
                    uf.unify(i*n + j, (i+1)*n + j);
                }
                if (j > 0 && dish[i][j-1] == '#') {
                    uf.unify(i*n + j, i*n + j-1);
                }
                if (j < n-1 && dish[i][j+1] == '#') {
                    uf.unify(i*n + j, i*n + j+1);
                }

                if (i > 0 && j > 0 && dish[i-1][j-1] == '#') {
                    uf.unify(i*n + j, (i-1)*n + j-1);
                }
                if (i > 0 && j < n-1 && dish[i-1][j+1] == '#') {
                    uf.unify(i*n + j, (i-1)*n + j+1);
                }
                if (i < m-1 && j > 0 && dish[i+1][j-1] == '#') {
                    uf.unify(i*n + j, (i+1)*n + j-1);
                }
                if (i < m-1 && j < n-1 && dish[i+1][j+1] == '#') {
                    uf.unify(i*n + j, (i+1)*n + j+1);
                }
            }
        }
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (dish[i][j] == '#') {
                ans.insert(uf.find(i*n + j));
            }
        }
    }

    std::cout << ans.size();
}