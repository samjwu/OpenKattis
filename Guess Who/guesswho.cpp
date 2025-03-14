#include <iostream>
#include <string>
#include <vector>

int main() {
    int n, m, q;
    std::cin >> n >> m >> q;

    std::string s;
    std::vector<std::string> people;
    std::vector<bool> possibilities(n, true);
    int question;
    char answer;

    for (int i = 0; i < n; i++) {
        std::cin >> s;
        people.push_back(s);
    }

    for (int i = 0; i < q; i++) {
        std::cin >> question >> answer;
        for (int j = 0; j < n; j++) {
            if (people[j][question-1] != answer) {
                possibilities[j] = false;
            }
        }
    }

    int possible = 0;
    int hidden = -1;
    for (int i = 0; i < n; i++) {
        if (possibilities[i] == true) {
            possible++;
            hidden = i+1;
        }
    }

    if (possible > 1) {
        std::cout << "ambiguous" << std::endl;
        std::cout << possible;
    } else {
        std::cout << "unique" << std::endl;
        std::cout << hidden;
    }
}
