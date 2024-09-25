#include <iostream>
#include <string>

int main() {
    std::string n;
    
    std::cin >> n;

    int ans = 0;

    for (int i = 0; i < n.length(); i++) {
        if((n[i] >= 'A' && n[i] <= 'Z') || (n[i] >= 'a' && n[i] <= 'z')) {
            ans += 1;
        }
    }

    std::cout << ans;
}
