#include <cmath>
#include <iostream>
#include <set>
#include <string>
#include <vector>

class UnionFind {
public:
    // if -1, no parent
    // if >= 0, has parent (with 0 == 'A', 1 == 'B', etc.) 
    UnionFind(int k) {
        parents.resize(k, -1);
    }

    // get node group that has no parent
    int find(int x) {
        // if node group has no parent, return node group
        if (parents[x] == -1) {
            return x;
        }

        // if node group has parent, recursively call until get node group with no parent
        parents[x] = find(parents[x]);
        return parents[x];
    }

    // if node groups are different types, set 2nd node group parent as 1st node group
    void unify(int x, int y) {
        int xPar = find(x);
        int yPar = find(y);

        if (xPar == yPar) {
            return;
        }

        parents[yPar] = xPar;
    }

    // return number of node groups that have no parents
    int uniqueGroups() {
        int ans = 0;

        for (int i=0; i<parents.size(); i++) {
            if (parents[i] == -1) {
                ans++;
            }   
        }

        return ans;
    }

private:
    std::vector<int> parents;
};

int main() {
    int n, m, k;
    std::cin >> n >> m >> k;

    std::string line;
    std::vector<std::vector<int>> matrix(n, std::vector<int>(m));
    UnionFind uf(k);
    
    for (int i=0; i<n; i++) {
        std::cin >> line;

        for (int j=0; j<m; j++) {
            matrix[i][j] = line[j] - 'A';   
        }
    }

    for (int i=0; i<n-1; i++) {
        for (int j=0; j<m; j++) {
            uf.unify(matrix[i][j], matrix[i+1][j]);
        }
    }

    std::cout << uf.uniqueGroups();
}