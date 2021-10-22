#include "vectorfunctions.h"

void backwards(std::vector<int>& vec){
    int n = vec.size();
    for (int i=0; i<n/2; i++) {
        int temp = vec[i];
        vec[i] = vec[n-1-i];
        vec[n-1-i] = temp;
    }
}

std::vector<int> everyOther(const std::vector<int>& vec){
    int n = vec.size();
    std::vector<int> ans;
    for (int i=0; i<n; i++) {
        if (i%2 == 0) {
            ans.push_back(vec[i]);
        }
    }
    return ans;
}

int smallest(const std::vector<int>& vec){
    int ans = 2001;
    for (int num: vec) {
        if (num < ans) {
            ans = num;
        }
    }
    return ans;
}

int sum(const std::vector<int>& vec){
    int ans = 0;
    for (int num: vec) {
        ans += num;
    }
    return ans;
}

int veryOdd(const std::vector<int>& suchVector){
    int n = suchVector.size();
    int ans = 0;
    for (int i=0; i<n; i++) {
        if (i%2 == 1 && suchVector[i]%2 == 1) {
            ans++;
        }
    }
    return ans;
}