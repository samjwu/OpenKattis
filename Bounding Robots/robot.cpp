#include <iostream>
#include <unordered_map>

int main() {
    int w, l;
    std::cin >> w >> l;

    int n;
    char dir;
    std::unordered_map<char, int> dirs = {
        {'u', 1}, {'d', -1}, {'l', -1}, {'r', 1}
    };
    int mag;
    int rw, rl, aw, al;

    while (w !=0 && l != 0) {
        std::cin >> n;
        rw = 0;
        rl = 0;
        aw = 0;
        al = 0;
        
        for (int i=0; i<n; i++) {
            std::cin >> dir >> mag;

            if (dir == 'l' || dir == 'r') {
                rw += dirs[dir] * mag;
                aw += dirs[dir] * mag;
                if (aw < 0) {
                    aw = 0;
                }
                if (aw >= w) {
                    aw = w-1;
                }
            } else {
                rl += dirs[dir] * mag;
                al += dirs[dir] * mag;
                if (al < 0) {
                    al = 0;
                }
                if (al >= l) {
                    al = l-1;
                }
            }
        }

        std::cout << "Robot thinks " << rw << " " << rl << std::endl;
        std::cout << "Actually at " << aw << " " << al << std::endl;
        std::cout << std::endl;
        
        std::cin >> w >> l;
    }

    return 0;
}