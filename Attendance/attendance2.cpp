#include <iostream>
#include <string>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::string s;
    std::vector<std::string> v;

    for (int i = 0; i < n; i++) {
        std::cin >> s;
        v.push_back(s);
    }

    int absences = 0;

    for (int i = 0; i < n; i++) {
        if (i < n-1 && v[i+1].compare("Present!") == 0) {
            i++;
        } else {
            std::cout << v[i] << std::endl;
            absences++;
        }
    }

    if (absences == 0) {
        std::cout << "No Absences";
    }
}
