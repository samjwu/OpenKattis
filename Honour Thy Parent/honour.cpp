#include <iostream>
#include <string>

int main() {
    std::string child, parent, ans;
    std::cin >> child >> parent;
    
    int len = child.length();
    char last = child[len-1];
    if (child[len-2] == 'e' && last == 'x') {
        ans = child + parent;
    } else if (last == 'a' || last == 'i' || last == 'o' || last == 'u') {
        ans = child.substr(0, len-1) + "ex" + parent;
    } else if (last == 'e') {
        ans = child + 'x' + parent;
    } else {
        ans = child + "ex" + parent;
    }

    std::cout << ans << std::endl;

    return 0;
}