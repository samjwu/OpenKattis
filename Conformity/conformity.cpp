#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <utility>

int main() {
    int n;
    std::cin >> n;

    int mostPopular = 0;
    std::map<std::set<int>, int> freq;
    int course;
    for (int i=0; i<n; i++) {
        std::set<int> courses;
        
        for (int j=0; j<5; j++) {
            std::cin >> course;
            courses.insert(course);
        }

        freq[courses]++;
        mostPopular = std::max(mostPopular, freq[courses]);
    }

    int ans = 0;
    for (std::pair<std::set<int>, int> p: freq) {
        if (p.second == mostPopular) {
            ans += p.second;
        }
    }

    std::cout << ans;
}