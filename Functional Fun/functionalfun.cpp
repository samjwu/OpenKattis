#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int main() {
    std::string line, word, x, y;
    std::stringstream ss;
    std::vector<std::string> domain, codomain;
    std::set<std::string> usedDomain, usedCodomain;
    bool injective, surjective, invalid;

    while (std::getline(std::cin, line)) {
        ss.clear();
        ss.str(line);
        ss >> word;
        while (ss >> word) {
            domain.push_back(word);
        }
        
        std::getline(std::cin, line);
        ss.clear();
        ss.str(line);
        ss >> word;
        while (ss >> word) {
            codomain.push_back(word);
        }
        
        std::getline(std::cin, line);
        int n = std::stoi(line);
        injective = true;
        surjective = true;
        invalid = false;
        
        while (n > 0) {
            std::getline(std::cin, line);
            ss.clear();
            ss.str(line);
            ss >> x >> word >> y;

            if (usedDomain.count(x)) {
                invalid = true;
            }
            if (usedCodomain.count(y)) {
                injective = false;
            }
            usedDomain.insert(x);
            usedCodomain.insert(y);

            n--;
        }

        if (codomain.size() != usedCodomain.size()) {
            surjective = false;
        }

        if (invalid) {
            std::cout << "not a function" << std::endl;
        } else if (injective && surjective) {
            std::cout << "bijective" << std::endl;
        } else if (injective) {
            std::cout << "injective" << std::endl;
        } else if (surjective) {
            std::cout << "surjective" << std::endl;
        } else {
            std::cout << "neither injective nor surjective" << std::endl;
        }

        domain.clear();
        codomain.clear();
        usedDomain.clear();
        usedCodomain.clear();
    }
}