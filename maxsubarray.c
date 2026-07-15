#include <stdio.h>

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -3, 4};
    int n = 9, i;
    int max = arr[0];
    int current = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] > current + arr[i])
        {
            current = arr[i];
        }
        else
        {
            current = current + arr[i];
        }
        if(current > max)
        {
            max = current;
        }
    }
    printf("Maximum Subarray Sum = %d", max);
    return 0; 
}