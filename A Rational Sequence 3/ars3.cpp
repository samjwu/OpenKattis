#include <algorithm>
#include <iostream>
#include <vector>

/**
 * Convert node number (n) to binary
 * Traversing the tree starting from the 2nd MSB gives the path from root (node 1) to leaf (node n)
 * 0 is left child, 1 is right child
 * 
 * eg: 4 = 100 => left, left
 *     5 = 101 => left, right
 *     6 = 110 => right, left
 */
int main() {
    int t;
    std::cin >> t;

    int k, n;
    std::vector<int> path;
    int p, q;
    for (int i=0; i<t; i++) {
        std::cin >> k >> n;
        path.clear();
        p = 1;
        q = 1;

        while (n) {
            path.push_back(n & 1);
            n = n >> 1;
        }

        std::reverse(path.begin(), path.end());
        for (int i=1; i<path.size(); i++) {
            if (path[i] == 1) {
                p = p+q;
            } else {
                q = p+q;
            }
        }

        std::cout << k << " " << p << "/" << q << std::endl;
    }
}