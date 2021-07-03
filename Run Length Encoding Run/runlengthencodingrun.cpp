#include <iostream>
#include <string>

std::string encode(std::string code) {
    std::string ans;

    int i = 1;
    int n = code.length();
    char currChar = code[0];
    int count = 1;

    while (i < n) {
        while (i < n && code[i-1] == code[i]) {
            count++;
            i++;
        }

        ans.push_back(currChar);
        ans.push_back(count + '0');

        currChar = code[i];
        count = 1;

        i++;
    }

    if (currChar != '\0' && count == 1) {
        ans.push_back(currChar);
        ans.push_back(count + '0');
    }

    return ans;
}

std::string decode(std::string code) {
    std::string ans;

    int i = 0;
    int n = code.length();
    char currChar;
    int count;

    while (i < n) {
        currChar = code[i];
        count = code[i+1] - '0';

        while (count) {
            ans.push_back(currChar);
            count--;
        }

        i += 2;
    }

    return ans;
}

int main() {
    char c;
    std::string code, ans;

    std::cin >> c >> code;

    if (c == 'E') {
        ans = encode(code);
    } else {
        ans = decode(code);
    }

    std::cout << ans;
}