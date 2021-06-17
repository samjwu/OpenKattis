#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    int n;
    std::cin >> n;
    std::unordered_set<std::string> inside;

    for (int i=0; i<n; i++) {
        std::string action, person;
        std::cin >> action >> person;

        if (action.compare("entry") == 0) {
            std::cout << person << " entered";

            if (inside.count(person) > 0) {
                std::cout << " (ANOMALY)";
            }

            std::cout << std::endl;
            inside.insert(person);

        } else {
            std::cout << person << " exited";
            
            if (inside.count(person) == 0) {
                std::cout << " (ANOMALY)";
            }
            
            std::cout << std::endl;
            inside.erase(person);
        }
    }
}