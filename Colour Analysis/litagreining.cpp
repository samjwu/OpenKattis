#include <iostream>
#include <string>

int main() {
    int r, g, b;
    std::cin >> r >> g >> b;

    bool allEqual = (r == g && g == b);
    bool rgEqual = (r == g);
    bool rbEqual = (r == b);
    bool gbEqual = (g == b);

    std::string result;

    if (allEqual) {
        if (r == 0) {
            result = "svartur";
        } else if (r == 255) {
            result = "hvitur";
        } else {
            result = "grar";
        }
    } else if (r > g && r > b) {
        result = "raudur";
    } else if (g > r && g > b) {
        result = "graenn";
    } else if (b > r && b > g) {
        result = "blar";
    } else if (rgEqual && r > b) {
        result = "gulur";
    } else if (rbEqual && r > g) {
        result = "fjolubleikur";
    } else if (gbEqual && g > r) {
        result = "blagraenn";
    } else {
        result = "othekkt";
    }

    std::cout << result << std::endl;
    
    return 0;
}
