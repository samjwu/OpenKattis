#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
    int p, k, h, ans;
    std::string line;
    std::vector<int> v;

    std::getline(std::cin, line);
    p = std::stoi(line);

    for (int i=0; i<p; i++) {
        std::getline(std::cin, line);
        std::stringstream ss(line);
        ans = 0;
        v.clear();

        ss >> k;
        while (ss >> h) {
            v.push_back(h);
        }

        for (int j=0; j<v.size()-1; j++) {
            for (int l=j+1; l<v.size(); l++) {
                if (v[j] > v[l]) {
                    ans++;
                }
            }
        }

        std::cout << k << " " << ans << std::endl;
    }
}