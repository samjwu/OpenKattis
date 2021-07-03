#include <iostream>
#include <string>

int main() {
    int p, t;
    std::string line;
    int ans = 0;
    std::cin >> p >> t;

    for (int i=0; i<p; i++) {
        bool pass = true;
        
        for (int j=0; j<t; j++) {
            std::cin >> line;

            for (int k=1; k<line.length(); k++) {
                if (line[k] != tolower(line[k])) {
                    pass = false;
                }
            }
        }

        if (pass) {
            ans++;
        }
    }

    std::cout << ans;
}