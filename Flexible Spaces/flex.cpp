#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

int main() {
    int w, p, l;
    std::cin >> w >> p;

    std::vector<int> partitions = {0};

    for (int i=0; i<p; i++) {
        std::cin >> l;
        partitions.push_back(l);
    }
    partitions.push_back(w);

    std::set<int> widths;

    for (int i=0; i<partitions.size()-1; i++) {
        for (int j=i+1; j<partitions.size(); j++) {
            widths.insert(partitions[j] - partitions[i]);
        }
    }

    for (std::set<int>::iterator it=widths.begin(); it!=widths.end(); it++) {
        std::cout << *it << " ";
    }
}