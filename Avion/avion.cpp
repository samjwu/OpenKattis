#include <iostream>
#include <string>

int main() {
    std::string input;

    int arr[5];
    int idx = 0;
    for (int i=1; i<=5; i++) {
        std::getline(std::cin, input);
        for (int j=0; j<input.length(); j++) {
            if (input.substr(j, 3) == "FBI") {
                arr[idx++] = i;
            }
        }
    }

    if (idx > 0) {
        for (int i=0; i<idx; i++) {
            std::cout << arr[i] << " ";
        }
    } else {
        std::cout << "HE GOT AWAY!" << std::endl;
    }
    
    return 0;
}