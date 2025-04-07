#include <iostream>
#include <list>

int main() {
    int n;
    std::cin >> n;
    
    std::list<int> petals;
    for (int i = 1; i <= n; ++i) {
        petals.push_back(i);
    }

    std::list<int>::iterator it = petals.begin();
    bool leave = false;

    while (petals.size() > 1) {
        if (leave) {
            it = petals.erase(it);
        } else {
            ++it;
        }
        if (it == petals.end()) {
            it = petals.begin();
        }
        leave = !leave;
    }

    std::cout << petals.front() << std::endl;
    return 0;
}
