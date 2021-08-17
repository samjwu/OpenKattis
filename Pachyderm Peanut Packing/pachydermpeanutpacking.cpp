#include <iostream>
#include <string>
#include <vector>

int main() {
    int n, m;
    double x1, y1, x2, y2;
    std::string size;
    double x, y;

    std::vector<std::vector<double>> boxes;
    std::vector<std::string> sizes;

    while (true) {
        std::cin >> n;
        if (n == 0) {
            break;
        }

        for (int i=0; i<n; i++) {
            std::cin >> x1 >> y1 >> x2 >> y2;
            std::cin >> size;

            sizes.push_back(size);
            boxes.push_back({x1, y1, x2, y2});
        }

        std::cin >> m;

        for (int i=0; i<m; i++) {
            std::cin >> x >> y;
            std::cin >> size;

            bool inBox = false;
            for (int j=0; j<n; j++) {
                if (boxes[j][0] <= x && boxes[j][1] <= y && boxes[j][2] >= x && boxes[j][3] >= y) {
                    inBox = true;

                    if (sizes[j] == size) {
                        std::cout << size << " correct" << std::endl;
                    } else {
                        std::cout << size << " " << sizes[j] << std::endl;
                    }

                    break;
                }
            }
            if (!inBox) {
                std::cout << size << " floor" << std::endl;
            }
        }
        std::cout << std::endl;
        boxes.clear();
        sizes.clear();
    }


}