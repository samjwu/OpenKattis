#include <algorithm>
#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int ans = std::max(c-b-1, std::max(b-a-1, 0));

    std::cout << ans << std::endl;
    
    return 0;
}