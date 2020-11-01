#include <iostream>
#include <string>

int main() {
    std::string month;
    int day;
    std::cin >> month >> day;
    
    if ((month.compare("OCT")==0 && day==31) || (month.compare("DEC")==0 && day==25)) {
        std::cout << "yup" << std::endl;
    } else {
        std::cout << "nope" << std::endl;
    }

    return 0;
}