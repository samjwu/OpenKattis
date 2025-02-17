#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

int main() {
    int n, m;
    std::string s;
    std::map<std::string, int> customers;
    std::vector<std::string> drinks;

    std::getline(std::cin, s);
    std::istringstream iss(s);
    iss >> n >> m;

    for (int i = 0; i < n; i++) {
        std::getline(std::cin, s);
        drinks.push_back(s);
    }

    for (int i = 0; i < m; i++) {
        std::getline(std::cin, s);
        if (customers.find(s) == customers.end()) {
            customers[s] = 0;
        }
        std::cout << drinks[customers[s]] << std::endl;
        customers[s] += 1;
        customers[s] %= n;
    }
}
