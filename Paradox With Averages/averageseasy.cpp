#include <iostream>
#include <vector>

int main() {
    std::vector<int> iqs;
    int n, iq, ncs, ne, ans = 0;
    double avgCs = 0, avgEco = 0;

    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cin >> ncs >> ne;
        
        for (int j=0; j<ncs; j++) {
            std::cin >> iq;
            iqs.push_back(iq);
            avgCs += iq;
        }
        avgCs /= ncs;

        for (int k=0; k<ne; k++) {
            std::cin >> iq;
            avgEco += iq;
        }
        avgEco /= ne;

        for (int j=0; j<ncs; j++) {
            if (iqs[j] < avgCs && iqs[j] > avgEco) {
                ans++;
            }
        }
        std::cout << ans << std::endl;

        iqs.clear();
        avgCs = 0;
        avgEco = 0;
        ans = 0;
    }
}