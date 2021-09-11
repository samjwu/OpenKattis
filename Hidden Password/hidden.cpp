#include <iostream>
#include <string>

int main() {
	std::string p, s;
	std::cin >> p >> s;

    int pLen = p.length(), sLen = s.length();
    int idxP = 0, idxS = 0;

    while (idxP < pLen && idxS < sLen) {
        if (p[idxP] == s[idxS]) {
            idxP++;
            idxS++;
            continue;
        } else {
            if (p.find(s[idxS], idxP) != std::string::npos) {
                std::cout << "FAIL";
                return 0;
            } else {
                idxS++;
            }
        }
    }

	if (idxP != pLen) {
		std::cout << "FAIL";
	} else {
        std::cout << "PASS";
    }
}