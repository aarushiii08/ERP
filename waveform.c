#include<stdio.h>
int main(){
    int arr[] = {5,1,2,3,4};
    int n=5,i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0; j<n-i-1; j++)
        if(arr[j] > arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         
        }    
    }
    for(i=0;i<n-1;i+2){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    printf("wave form array \n:");

    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}