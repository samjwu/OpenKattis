#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    int m, n, money, salary;
    std::cin >> m >> n;
    std::string word;
    std::unordered_map<std::string, int> hayDict;

    for (int i=0; i<m; i++) {
        std::cin >> word >> money;
        hayDict[word] = money;
    }

    for (int i=0; i<n; i++) {
        salary = 0;

        while (std::cin >> word) {
            if (word.compare(".") == 0) {
                break;
            }

            salary += hayDict[word];
        }

        std::cout << salary << std::endl;
    }
}