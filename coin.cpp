//coin change problem 
#include <stdio.h>
int coinChange(int coins[], int n, int sum)
{
    if (sum == 0)
        return 1;
    if (sum < 0 || n == 0)
        return 0;
    return coinChange(coins, n, sum - coins[n - 1])
         + coinChange(coins, n - 1, sum);
}
int main()
{
    int coins[] = {1, 2, 3};
    int n = 3;
    int sum = 4;
    int result = coinChange(coins, n, sum);
    printf("Number of ways = %d\n", result);
    return 0;
}