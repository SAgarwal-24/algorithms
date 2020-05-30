#include "dp.h"

using namespace std;

/*
 * Given a positive integer n, find the least number of perfect square numbers (for example, 1, 4, 9, 16, ...) which sum to n.

Example 1:

Input: n = 12
Output: 3
Explanation: 12 = 4 + 4 + 4.
Example 2:

Input: n = 13
Output: 2
Explanation: 13 = 4 + 9.
 */

int numSquares(int n) {
    std::vector<int> dp(n + 1, n + 1);

    dp[0] = 0;

    for(int i = 1; i < dp.size(); ++i) {
        for(int j = 1; j <= sqrt(i); ++j) { /// '<=', not '<', since we want sqrt(i) value to be assessed as well.
            dp[i] = std::min(dp[i], dp[i - j*j] + 1);
        }
    }

    return dp.back();
}