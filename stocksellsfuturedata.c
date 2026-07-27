// buyer shares and sells on a future data, given stock price of n days, trader allowed to make atmost k transactions, new start when previous completed, find max profit that a share trader could have made.
#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int maxProfit(int price[], int n, int k) {
    int dp[k + 1][n];

    // No profit with 0 transactions
    for (int t = 0; t <= k; t++)
        dp[t][0] = 0;

    // No profit with 0 transactions
    for (int d = 0; d < n; d++)
        dp[0][d] = 0;

    // For each transaction
    for (int t = 1; t <= k; t++) {
        int maxDiff = -price[0];

        for (int d = 1; d < n; d++) {
            dp[t][d] = max(
                dp[t][d - 1],
                price[d] + maxDiff
            );

            maxDiff = max(maxDiff, dp[t - 1][d] - price[d]);
        }
    }

    return dp[k][n - 1];
}

int main() {
    int price[] = {10, 22, 5, 75, 65, 80};
    int n = 6;
    int k = 2;

    int result = maxProfit(price, n, k);

    printf("Maximum Profit = %d\n", result);

    return 0;
}