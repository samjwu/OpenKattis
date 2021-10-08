#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    bool noBlueLeft = true, noBlueRight = true;
    int leftUpper = 8, leftLower = 8, rightUpper = 8, rightLower = 8;
    std::string tooth;
    char status;
    for (int i=0; i<n; i++) {
        std::cin >> tooth >> status;
        if (tooth[0] == '-') {
            leftLower--;
        } else if (tooth[0] == '+') {
            leftUpper--;
        } else if (tooth[1] == '-') {
            rightLower--;
        } else {
            rightUpper--;
        }

        if (status == 'b') {
            if (isdigit(tooth[1])) {
                noBlueLeft = false;
            } else {
                noBlueRight = false;
            }
        }
    }

    if (noBlueLeft && leftUpper >= 1 && leftLower >= 1) {
        std::cout << 0;
    } else if (noBlueRight && rightUpper >= 1 && rightLower >= 1) {
        std::cout << 1;
    } else {
        std::cout << 2;
    }
}