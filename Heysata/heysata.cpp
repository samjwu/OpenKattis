#include <iostream>

int main() {
    int n;
    char needle;
    char hay;
    bool found = false;
    
    std::cin >> n >> needle;

    for (int i = 0; i < n; i++) {
        std::cin >> hay;

        if (needle == hay) {
            found = true;
        }
    }

    if (found) {
        std::cout << "Unnar fann hana!";
    } else {
        std::cout << "Unnar fann hana ekki!";
    }
}
