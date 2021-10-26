#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

void has7777(std::vector<int>& v) {
    bool has = false;
    std::unordered_map<int, int> freq;

    for (int num: v) {
        if (freq[7777 - num] > 0) {
            has = true;
            break;
        }
        freq[num]++;
    }

    if (has) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
}

void isUnique(std::vector<int>& v) {
    bool unique = true;
    std::unordered_set<int> set;

    for (int num: v) {
        if (set.find(num) != set.end()) {
            unique = false;
            break;
        }
        set.insert(num);
    }

    if (unique) {
        std::cout << "Unique";
    } else {
        std::cout << "Contains duplicate";
    }
}

void modeHalf(std::vector<int>& v, int n) {
    int half = n/2;
    int ans = -1;
    std::unordered_map<int, int> freq;

    for (int num: v) {
        freq[num]++;
        if (freq[num] > half) {
            ans = num;
        }
    }

    std::cout << ans;
}

void getMedian(std::vector<int>& v, int n) {
    std::sort(v.begin(), v.end());

    if (n % 2 == 0) {
        std::cout << v[n/2 - 1] << " " << v[n/2];
    } else {
        std::cout << v[n/2];
    }
}

void getRange(std::vector<int>& v) {
    std::sort(v.begin(), v.end());

    for (int num: v) {
        if (num >= 100 && num <= 999) {
            std::cout << num << " ";
        }
    }
}

int main() {
    int n, t, num;
    std::vector<int> v;

    std::cin >> n >> t;
    for (int i=0; i<n; i++) {
        std::cin >> num;
        v.push_back(num);
    }

    switch (t) {
        case 1:
            has7777(v);
            break;
        case 2:
            isUnique(v);
            break;
        case 3:
            modeHalf(v, n);
            break;
        case 4:
            getMedian(v, n);
            break;
        case 5:
            getRange(v);
            break;
    }
}