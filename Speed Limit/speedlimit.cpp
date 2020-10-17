#include <iostream>
#include <string>

int main() {
    int n = 0;
    int s, t1, t2, miles;
    while (true) {
        std::string input;
        getline(std::cin, input);
        n = stoi(input);
        if (n == -1) {
            break;
        }
        t1 = 0;
        miles = 0;
        for (int i=0; i<n; i++) {
            getline(std::cin, input, ' ');
            s = stoi(input);
            getline(std::cin, input);
            t2 = stoi(input);
            miles += s*(t2-t1);
            t1 = t2;
        }
        std::cout << miles << " miles" << std::endl;
    }
    
    return 0;
}