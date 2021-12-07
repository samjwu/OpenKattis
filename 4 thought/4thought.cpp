#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int calc(int a, int b, char op){
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
    }
}

int eval(std::vector<char>& order) {
    std::vector<int> nums = {4, 4, 4, 4};
    
    int i = 0;
    while (i < order.size()) {
        if (order[i] == '*' || order[i] == '/') {
            nums[i] = calc(nums[i], nums[i+1], order[i]);
            nums.erase(nums.begin() + i + 1);
            order.erase(order.begin() + i);
        } else {
            i++;
        }
    }

    i = 0;
    while (i < order.size()) {
        nums[i] = calc(nums[i], nums[i+1], order[i]);
        nums.erase(nums.begin() + i + 1);
        order.erase(order.begin() + i);
    }

    return nums[0];
}

void precalculate(std::unordered_map<int, std::string>& ans) {
    std::vector<char> ops = {'*', '/', '+', '-'};
    std::vector<char> order;

    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            for (int k=0; k<4; k++) {
                order = {ops[i], ops[j], ops[k]};
                int result = eval(order);
                ans[result] = "4 " + std::string(1, ops[i]) + " 4 " + std::string(1, ops[j]) + " 4 " + std::string(1, ops[k]) + " 4 = " + std::to_string(result);
            }
        }
    }       
}

int main(){
    std::unordered_map<int, std::string> ans;
    precalculate(ans);

    int m, n;
    std::cin >> m;

    for (int i=0; i<m; i++) {
        std::cin >> n;
        if (ans.find(n) != ans.end()){
            std::cout << ans[n] << std::endl;
        } else {
            std::cout << "no solution" << std::endl;
        }
    }
}