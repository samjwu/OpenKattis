#include <iostream>
#include <string>
#include <map>
#include <vector>

int main() {
    std::map<std::vector<std::string>, int> digits = {
      {{"***",   
        "* *",   
        "* *",   
        "* *",   
        "***"}, 0},

      {{"  *",   
        "  *",   
        "  *",   
        "  *",   
        "  *"}, 1},

      {{"***",   
        "  *",   
        "***",   
        "*  ",   
        "***"}, 2},

      {{"***",   
        "  *",   
        "***",   
        "  *",   
        "***"}, 3},

      {{"* *",   
        "* *",   
        "***",   
        "  *",   
        "  *"}, 4},

      {{"***",   
        "*  ",   
        "***",   
        "  *",   
        "***"}, 5},

      {{"***",   
        "*  ",   
        "***",   
        "* *",   
        "***"}, 6},

      {{"***",   
        "  *",   
        "  *",   
        "  *",   
        "  *"}, 7},

      {{"***",   
        "* *",   
        "***",   
        "* *",   
        "***"}, 8},

      {{"***",   
        "* *",   
        "***",   
        "  *",   
        "***"}, 9}
    };

    std::vector<std::string> ascii;
    std::string line;

    for (int i=0; i<5; i++) {
        std::getline(std::cin, line);
        ascii.push_back(line);
    }

    // line len = 3 char per digit + (digits-1) spaces
    int numDigits = (line.length() + 1) / 4;
    int timer = 0;

    for (int i=0; i<numDigits; i++) {
        std::vector<std::string> block;
        for (int j=0; j<5; j++) {
            // std::cout << ascii[j].substr(4*i, 3) << std::endl;
            block.push_back(ascii[j].substr(4*i, 3));
        }

        if (digits.count(block) > 0) {
            timer = (timer * 10) + digits[block];
        } else {
            std::cout << "BOOM!!" << std::endl;
            return 0;
        }
    }

    if (timer % 6 == 0) {
        std::cout << "BEER!!" << std::endl;
    } else {
        std::cout << "BOOM!!" << std::endl;
    }
}