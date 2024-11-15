#include <iostream>
#include <string>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::string s(n, '?');
    int k;
    std::string dna;

    for (int i = 0; i < m; i++) {
        std::cin >> k >> dna;

        int idx = 0;

        for (int j = k-1; j < k-1+dna.length(); j++) {
            if (s[j] == '?' || s[j] == dna[idx]) {
                s[j] = dna[idx];
                idx++;
            } else {
                std::cout << "Villa";
                return 0;
            }
        }
    }

    std::cout << s;
}
