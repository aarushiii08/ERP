#include<stdio.h>
#include<stdlib.h> 
int main(){
    int arr[] = {3,15,1,7,19,2,12};
    int n=7,i,j,temp,sum=0;

    for(i=0 ;i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("sorted array is: ");
    for(i=0; i<n ;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n Differences:\n");
    for(i=0; i<n-1; i++){
        int diff = abs(arr[i+1] - arr[i]);
        printf("%d - %d = %d\n", arr[i+1], arr[i], diff);
        sum = sum + diff;
    }
    printf("\nsum = %d", sum);
    return 0; 
} 