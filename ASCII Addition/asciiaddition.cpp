#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

void fillNumbers(std::vector<std::vector<std::string>>& numbers, std::string& line, int x, int lineIdx) {
    for (int i=0; i<x; i++) {
        numbers[i][lineIdx] = line.substr(i*6, 5);
    }
}

int getPlusIdx(std::vector<std::vector<std::string>>& numbers, int x, std::map<std::vector<std::string>, char>& asciiToNum) {
    for (int i=0; i<x; i++) {
        if (asciiToNum[numbers[i]] == '+') {
            return i;
        }
    }

    return -1;
}

std::vector<int> getNumber(std::vector<std::vector<std::string>>& numbers, int start, int end, std::map<std::vector<std::string>, char>& asciiToNum) {
    std::vector<int> ans;
    
    for (int i=start; i<end; i++) {
        ans.push_back(asciiToNum[numbers[i]] - '0');
    }

    return ans;
}

std::vector<int> addNumbers(std::vector<int> a, std::vector<int> b) {
    std::vector<int> c;
    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());

    int i = 0, j = 0;
    int m = a.size(), n = b.size();
    int carry = 0;
    
    while (i < m && j < n) {
        int sum = (a[i] + b[j] + carry) % 10;
        c.push_back(sum);
        carry = (a[i] + b[j] + carry) / 10;
        i++;
        j++;
    }

    while (i < m) {
        int sum = (a[i] + carry) % 10;
        c.push_back(sum);
        carry = (a[i] + carry) / 10;
        i++;
    }

    while (j < n) {
        int sum = (b[j] + carry) % 10;
        c.push_back(sum);
        carry = (b[j] + carry) / 10;
        j++;
    }

    if (carry > 0) {
        c.push_back(carry);    
    }

    std::reverse(c.begin(), c.end());
    return c;
}

void outputAscii(std::vector<int> c, std::map<char, std::vector<std::string>>& numToAscii) {
    for (int i=0; i<7; i++) {
        for (int j=0; j<c.size(); j++) {
            std::cout << numToAscii[c[j] + '0'][i];
            
            if (j != c.size()-1) {
                std::cout << '.';
            }
        }

        std::cout << std::endl;
    }
}

int main() {
    std::map<char, std::vector<std::string>> numToAscii;
    std::map<std::vector<std::string>, char> asciiToNum;
    numToAscii['0'] = { "xxxxx",
                        "x...x",
                        "x...x",
                        "x...x",
                        "x...x",
                        "x...x",
                        "xxxxx"};
    asciiToNum[numToAscii['0']] = '0';

    numToAscii['1'] = { "....x",
                        "....x",
                        "....x",
                        "....x",
                        "....x",
                        "....x",
                        "....x"};
    asciiToNum[numToAscii['1']] = '1';

    numToAscii['2'] = { "xxxxx",
                        "....x",
                        "....x",
                        "xxxxx",
                        "x....",
                        "x....",
                        "xxxxx"};
    asciiToNum[numToAscii['2']] = '2';

    numToAscii['3'] = { "xxxxx",
                        "....x",
                        "....x",
                        "xxxxx",
                        "....x",
                        "....x",
                        "xxxxx"};
    asciiToNum[numToAscii['3']] = '3';

    numToAscii['4'] = { "x...x",
                        "x...x",
                        "x...x",
                        "xxxxx",
                        "....x",
                        "....x",
                        "....x"};
    asciiToNum[numToAscii['4']] = '4';

    numToAscii['5'] = { "xxxxx",
                        "x....",
                        "x....",
                        "xxxxx",
                        "....x",
                        "....x",
                        "xxxxx"};
    asciiToNum[numToAscii['5']] = '5';

    numToAscii['6'] = { "xxxxx",
                        "x....",
                        "x....",
                        "xxxxx",
                        "x...x",
                        "x...x",
                        "xxxxx"};
    asciiToNum[numToAscii['6']] = '6';

    numToAscii['7'] = { "xxxxx",
                        "....x",
                        "....x",
                        "....x",
                        "....x",
                        "....x",
                        "....x"};
    asciiToNum[numToAscii['7']] = '7';

    numToAscii['8'] = { "xxxxx",
                        "x...x",
                        "x...x",
                        "xxxxx",
                        "x...x",
                        "x...x",
                        "xxxxx"};
    asciiToNum[numToAscii['8']] = '8';

    numToAscii['9'] = { "xxxxx",
                        "x...x",
                        "x...x",
                        "xxxxx",
                        "....x",
                        "....x",
                        "xxxxx"};
    asciiToNum[numToAscii['9']] = '9';

    numToAscii['+'] = { ".....",
                        "..x..",
                        "..x..",
                        "xxxxx",
                        "..x..",
                        "..x..",
                        "....."};
    asciiToNum[numToAscii['+']] = '+';

    std::string line;
    std::cin >> line;
    int n = line.length();
    int x = (n+1) / 6; // 5x + (x-1) = n; x is number of ASCII numbers
    
    std::vector<std::vector<std::string>> numbers(x, std::vector<std::string>(7));
    fillNumbers(numbers, line, x, 0);

    for (int i=1; i<7; i++) {
        std::cin >> line;
        fillNumbers(numbers, line, x, i);
    }

    int plus = getPlusIdx(numbers, x, asciiToNum);
    std::vector<int> a = getNumber(numbers, 0, plus, asciiToNum);
    std::vector<int> b = getNumber(numbers, plus+1, x, asciiToNum);
    std::vector<int> c = addNumbers(a, b);
    outputAscii(c, numToAscii);
}