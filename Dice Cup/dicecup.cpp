#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

int main() {
    std::string input;
    getline(std::cin, input, ' ');
    int d1 = stoi(input);
    getline(std::cin, input);
    int d2 = stoi(input);

    std::map<int, int> values;
    for (int i=1; i<=d1; i++) {
        for (int j=1; j<=d2; j++) {
            if (values.count(i+j) == 0) {
                values[i+j] = 1;
            } else {
                values[i+j] += 1;
            }
        }
    }

    int highest_freq = 0;
    std::vector<int> highest_prob_val;
    std::map<int, int>::iterator it = values.begin();
    while (it != values.end()) {
        if (it->second > highest_freq) {
            highest_freq = it->second;
            highest_prob_val.clear();
            highest_prob_val.push_back(it->first);
        } else if (it->second == highest_freq) {
            highest_prob_val.push_back(it->first);
        }
        it++;
    }

    for (std::vector<int>::iterator it = highest_prob_val.begin(); it!= highest_prob_val.end(); it++) {
        std::cout << *it << std::endl;
    }
    
    return 0;
}