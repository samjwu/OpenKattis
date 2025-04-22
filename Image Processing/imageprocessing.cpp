#include <iostream>
#include <vector>

int main() {
    int h, w, n, m;
    std::cin >> h >> w >> n >> m;

    std::vector<std::vector<int>> image(h, std::vector<int>(w));
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            std::cin >> image[i][j];
        }
    }

    std::vector<std::vector<int>> kernel(n, std::vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> kernel[i][j];
        }
    }

    // flip vert and horiz
    std::vector<std::vector<int>> flipped_kernel(n, std::vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            flipped_kernel[i][j] = kernel[n-1-i][m-1-j];
        }
    }

    int outH = h - n + 1;
    int outW = w - m + 1;
    std::vector<std::vector<int>> output(outH, std::vector<int>(outW, 0));

    for (int i = 0; i < outH; ++i) {
        for (int j = 0; j < outW; ++j) {
            int sum = 0;

            for (int k = 0; k < n; ++k) {
                for (int l = 0; l < m; ++l) {
                    sum += image[i+k][j+l] * flipped_kernel[k][l];
                }
            }

            output[i][j] = sum;
        }
    }

    for (int i = 0; i < outH; ++i) {
        for (int j = 0; j < outW; ++j) {
            std::cout << output[i][j];
            if (j != outW - 1) {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}
