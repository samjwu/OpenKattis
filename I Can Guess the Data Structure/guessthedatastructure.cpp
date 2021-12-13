#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>

bool isStack(std::vector<int>& ops, std::vector<int>& nums) {
    std::stack<int> stk;
    int n = ops.size();

    for (int i=0; i<n; i++) {
        if (ops[i] == 1) {
            stk.push(nums[i]);
        } else {
            if (stk.empty() || stk.top() != nums[i]) {
                return false;
            } else {
                stk.pop();
            }
        }
    }

    return true;
}

bool isQueue(std::vector<int>& ops, std::vector<int>& nums) {
    std::queue<int> q;
    int n = ops.size();

    for (int i=0; i<n; i++) {
        if (ops[i] == 1) {
            q.push(nums[i]);
        } else {
            if (q.empty() || q.front() != nums[i]) {
                return false;
            } else {
                q.pop();
            }
        }
    }

    return true;
}

bool isMaxHeap(std::vector<int>& ops, std::vector<int>& nums) {
    std::priority_queue<int> maxHeap;
    int n = ops.size();

    for (int i=0; i<n; i++) {
        if (ops[i] == 1) {
            maxHeap.push(nums[i]);
        } else {
            if (maxHeap.empty() || maxHeap.top() != nums[i]) {
                return false;
            } else {
                maxHeap.pop();
            }
        }
    }

    return true;
}

int main() {
    int n, op, num, possible;
    std::vector<int> ops, nums;
    std::string ans;

    while (std::cin >> n) {
        for (int i=0; i<n; i++) {
            std::cin >> op >> num;
            ops.push_back(op);
            nums.push_back(num);
        }

        ans = "impossible";
        possible = 0;

        if (isStack(ops, nums)) {
            ans = "stack";
            possible++;
        }

        if (isQueue(ops, nums)) {
            ans = "queue";
            possible++;
        }

        if (isMaxHeap(ops, nums)) {
            ans = "priority queue";
            possible++;
        }

        if (possible > 1) {
            ans = "not sure";
        }

        std::cout << ans << std::endl;

        ops.clear();
        nums.clear();
    }
}