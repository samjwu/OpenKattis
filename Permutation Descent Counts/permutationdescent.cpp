#include <iostream>
#include <vector>

void precalcPdc(std::vector<std::vector<int>>& memo) {
    // base cases
    memo[2][0] = 1;
    memo[2][1] = 1;

    for (int i=3; i<=100; i++) {
        memo[i][0] = 1; // identity perm

        for (int j=1; j<i-1; j++) {
            // to get PDC with i elements and j descents, either
            
            // take PDC with i-1 elements and j-1 descents and add the ith element at the start or at the ends of descents
            // the total number of slots is i-1, with j descents
            // thus there are i-1-j spaces in total
            // equivalent: pdc(i-1, j-1) with i-1-j permutations at ends of descents + 1 at the start
            // OR
            // take PDC with i-1 elements and j descents and add the ith element between descents or at the end
            // equivalent: pdc(i-1, j) with j permutations between descents + 1 at the end 

            // final equation: pdc(i, j) = (i-j) * pdc(i-1, j-1) + (j+1) * pdc(i-1, j)
            memo[i][j] = (i-j) * memo[i-1][j-1] + (j+1) * memo[i-1][j];
        
            memo[i][j] %= 1001113;
        }

        memo[i][i-1] = 1; // reversing perm
    }
}

int main() {
    int p, k, n, v;
    std::cin >> p;

    std::vector<std::vector<int>> memo(101, std::vector<int>(101));
    precalcPdc(memo);

    for (int i=0; i<p; i++) {
        std::cin >> k >> n >> v;
        std::cout << k << ' ' << memo[n][v] << std::endl;
    }
}