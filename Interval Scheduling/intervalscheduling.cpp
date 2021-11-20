#include <algorithm>
#include <iostream>
#include <vector>

struct interval {
    int s, f;

    interval(int s, int f) {
        this->s = s;
        this->f = f;
    }
};

bool comp(interval i1, interval i2) {
    return i1.f < i2.f;
}

int main() {
    int n;
    std::cin >> n;

    int s, f;
    std::vector<interval> intervals;

    for (int i=0; i<n; i++) {
        std::cin >> s >> f;
        intervals.push_back(interval(s, f));
    }

    std::sort(intervals.begin(), intervals.end(), comp);

    int ans = 0;
    int lastFinished = 0;

    for (int i=0; i<n; i++) {
        if (intervals[i].s >= lastFinished) {
            ans++;
            lastFinished = intervals[i].f;
        }
    }

    std::cout << ans;
}