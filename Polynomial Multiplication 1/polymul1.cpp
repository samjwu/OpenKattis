#include <iostream>
#include <vector>

void addPoly(std::vector<int>& p1, std::vector<int>& p2) {
    int l1 = p1.size();
    int l2 = p2.size();
    int n = l1 + l2 - 1;
    std::vector<int> p3(n, 0);

    for (int i=0; i<l1; i++) {
        for (int j=0; j<l2; j++) {
            p3[i+j] += p1[i] * p2[j];
        }
    }

    std::cout << n-1 << std::endl;
    for (int k=0; k<n; k++) {
        std::cout << p3[k] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int t, x, a;
    std::cin >> t;

    for (int i=0; i<t; i++) {
        std::vector<int> p1, p2;

        std::cin >> x;
        for (int j=0; j<=x; j++) {
            std::cin >> a;
            p1.push_back(a);
        }

        std::cin >> x;
        for (int j=0; j<=x; j++) {
            std::cin >> a;
            p2.push_back(a);
        }

        addPoly(p1, p2);
    }
}