#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

int main() {
    int n;
    std::string name;
    int like;
    std::string bday;
    std::unordered_map<std::string, std::pair<std::string, int>> bday2Friend;
    std::vector<std::string> ans;

    std::cin >> n;
    for (int i=0; i<n; i++) {
        std::cin >> name >> like >> bday;
        if (bday2Friend.find(bday) != bday2Friend.end()) {
            if (bday2Friend[bday].second < like) {
                bday2Friend[bday] = std::make_pair(name, like);
            }
        } else {
            bday2Friend[bday] = std::make_pair(name, like);
        }
    }

    for (auto frien: bday2Friend) {
        ans.push_back(frien.second.first);
    }

    std::sort(ans.begin(), ans.end());

    int m = ans.size();
    std::cout << m << std::endl;
    for (int i=0; i<m; i++) {
        std::cout << ans[i] << std::endl;
    }
}