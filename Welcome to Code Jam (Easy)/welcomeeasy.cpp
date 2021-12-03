#include <iostream>
#include <string>

void countSubsequences(int idx, int currLen, std::string& s, std::string& target, int* count) {
    if (currLen == target.length()) {
        *count += 1;
        return;
    }

    for (int i=idx; i<s.length(); i++) {
        if (target[currLen] == s[i]) {
            countSubsequences(i+1, currLen+1, s, target, count);
        }
    }
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    int n = std::stoi(s);
    
    std::string target = "welcome to code jam";
    int count = 0;

    for (int i=0; i<n; i++) {
        std::getline(std::cin, s);

        countSubsequences(0, 0, s, target, &count);

        count %= 10000;
        std::string ans = std::to_string(count);
        while (ans.length() < 4) {
            ans.insert(0, 1, '0');
        }

        std::cout << "Case #" << i+1 << ": " << ans << std::endl;
        count = 0;
    }
}