#include <algorithm>
#include <iostream>
#include <set>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore();
    std::set<std::string> distinctStrings;

    for (int i = 0; i < n; ++i) {
        std::string s;
        std::getline(std::cin, s);

        std::replace(s.begin(), s.end(), '-', ' ');
        
        std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
            return std::tolower(c);
        });

        distinctStrings.insert(s);
    }

    std::cout << distinctStrings.size() << std::endl;

    return 0;
}
