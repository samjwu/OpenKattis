#include <iostream>
#include <map>
#include <set>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::string first, last, course;
    std::set<std::string> seen;
    std::map<std::string, int> taken;

    for (int i=0; i<n; i++) {
        std::cin >> first >> last >> course;
        std::string key = first+last+course;
        if (seen.count(key) == 0) {
            taken[course]++;
        }
        seen.insert(key);
    }

    for (auto p: taken) {
        std::cout << p.first << " " << p.second << std::endl;
    }
}