#include <iostream>
#include <set>
#include <string>
#include <vector>

int main() {
    int k, m, c, r;
    std::string course;
    std::set<std::string> taken, required;
    bool grad;

    while (std::cin >> k) {
        if (k == 0) {
            break;
        }
        grad = true;
        std::cin >> m;
        
        for (int i=0; i<k; i++) {
            std::cin >> course;
            taken.insert(course);
        }

        for (int i=0; i<m; i++) {
            std::cin >> c >> r;
            for (int j=0; j<c; j++) {
                std::cin >> course;
                required.insert(course);
            }

            int intersection = 0;
            for (std::string req: required) {
                if (taken.count(req)) {
                    intersection++;
                }
            }

            if (intersection < r) {
                grad = false;
            }
            
            required.clear();
        }

        if (grad) {
            std::cout << "yes" << std::endl;
        } else {
            std::cout << "no" << std::endl;
        }

        taken.clear();
    }
}