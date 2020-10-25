#include <iostream>
#include <vector>

int main() {
    int start, end, buses;
    std::cin >> start >> end >> buses;

    int input;

    std::vector<int> walktime;
    for (int i=0; i<buses+1; i++) {
        std::cin >> input;
        walktime.push_back(input);
    }

    std::vector<int> bustime;
    for (int i=0; i<buses; i++) {
        std::cin >> input;
        bustime.push_back(input);
    }

    std::vector<int> busarrive;
    for (int i=0; i<buses; i++) {
        std::cin >> input;
        busarrive.push_back(input);
    }

    for (int i=0; i<buses; i++) {
        start += walktime[i];
        if (start % busarrive[i] != 0) {
            start += busarrive[i] - (start % busarrive[i]);
        }
        start += bustime[i];
    }
    start += walktime[buses];

    if (start <= end) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

	return 0;
}