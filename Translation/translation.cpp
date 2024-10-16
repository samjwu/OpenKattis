#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main() {
    int n, m;

    std::cin >> n;

    std::string s, t;
    std::vector<std::string> sentence;

    for (int i = 0; i < n; i++) {
        std::cin >> s;
        sentence.push_back(s);
    }

    std::cin >> m;

    std::unordered_map<std::string, std::string> dictionary;

    for (int i = 0; i < m; i++) {
        std::cin >> s >> t;
        dictionary[s] = t;
    }

    for (std::string word : sentence) {
        std::cout << dictionary[word] << ' ';
    }
}
