#include <iostream>
#include <queue>
#include <string>

int main() {
    int t;
    std::cin >> t;

    auto Greater = [](std::string s1, std::string s2) {
        if (s1.length() == s2.length()) {
            return s1.compare(s2) > 0;
        }
        return s1.length() > s2.length();
    };
    std::priority_queue<std::string, std::vector<std::string>, decltype(Greater)> minHeapGod(Greater), minHeapMecha(Greater);
    
    int g, m;
    std::string mon, god, mecha;
    for (int i=0; i<t; i++) {
        std::cin >> g >> m;
        for (int j=0; j<g; j++) {
            std::cin >> mon;
            minHeapGod.push(mon);
        }
        for (int k=0; k<m; k++) {
            std::cin >> mon;
            minHeapMecha.push(mon);
        }

        while (minHeapGod.size() != 0 && minHeapMecha.size() != 0) {
            god = minHeapGod.top();
            mecha = minHeapMecha.top();

            if (god.length() > mecha.length()) {
                minHeapMecha.pop();
                continue;
            }
            if (god.length() < mecha.length()) {
                minHeapGod.pop();
                continue;
            }


            if (god.compare(mecha) < 0) {
                minHeapGod.pop();
            } else {
                minHeapMecha.pop();
            }
        }

        if (minHeapMecha.size() == 0) {
            std::cout << "Godzilla" << std::endl;
        } else {
            std::cout << "MechaGodzilla" << std::endl;
        }

        while (minHeapGod.size() != 0) {
            minHeapGod.pop();
        }
        while (minHeapMecha.size() != 0) {
            minHeapMecha.pop();
        }
    }
}