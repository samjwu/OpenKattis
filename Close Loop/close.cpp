#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    int n, s;
    std::string segment;
    std::vector<int> red, blue;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> s;
        for (int j=0; j<s; j++) {
            std::cin >> segment;
            if (segment.back() == 'B') {
                blue.push_back(stoi(segment.substr(0, segment.length()-1)));
            } else {
                red.push_back(stoi(segment.substr(0, segment.length()-1)));
            }
        }

        sort(red.begin(), red.end(), std::greater<>());
        sort(blue.begin(), blue.end(), std::greater<>());

        int ans = 0;
        int idx = 0;
        while (red.size() > idx && blue.size() > idx) {
            ans += red[idx] + blue[idx] - 2;
            idx++;
        }
        std::cout << "Case #" << i+1 << ": " << ans << std::endl;
        red.clear();
        blue.clear();
    }
    
    return 0;
}