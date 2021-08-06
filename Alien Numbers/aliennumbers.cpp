#include <algorithm>
#include <iostream>
#include <map>
#include <string>

int toBase10(std::string& alien, std::string& source) {
    int ans = 0;
    int sourceBase = source.length();
    std::map<char, int> toSourceBase;

    for (int i=0; i<sourceBase; i++) {
        toSourceBase[source[i]] = i;
    }

    for (char c: alien) {
        ans *= sourceBase;
        ans += toSourceBase[c];
    }

    return ans;
}

std::string translate(std::string& alien, std::string& source, std::string& target) {
    std::string ans;
    int alienBase10 = toBase10(alien, source);
    int targetBase = target.length();

    while (alienBase10 > 0) {
        ans.push_back(target[alienBase10 % targetBase]);
        alienBase10 /= targetBase;
    }

    std::reverse(ans.begin(), ans.end());

    return ans;
}

int main() {
    int t;
    std::string alien, source, target;
    std::cin >> t;
    
    for (int i=0; i<t; i++) {
        std::cin >> alien >> source >> target;
        std::cout << "Case #" << i+1 << ": " << translate(alien, source, target) << std::endl;
    }
}