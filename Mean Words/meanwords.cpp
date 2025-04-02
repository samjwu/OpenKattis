#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore();
    
    std::vector<std::string> words(n);
    int m = 0;
    
    for (int i = 0; i < n; ++i) {
        std::getline(std::cin, words[i]);

        if (words[i].length() > m) {
            m = words[i].length();
        }
    }
    
    std::string ans(m, 'a');

    for (int i = 0; i < m; ++i) {
        int value = 0;
        int num = 0;

        for (int j = 0; j < n; ++j) {
            if (i < words[j].length()) {
                value += words[j][i];
                num++;
            }
        }

        if (num > 0) {
            ans[i] = static_cast<char>(value / num);
        }
    }
    
    std::cout << ans << std::endl;

    return 0;
}
