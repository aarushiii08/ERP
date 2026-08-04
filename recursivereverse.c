#include <stdio.h>
int Disp(int n)
{
    if(n==0)
       return 0;
    else {
        printf("%d ",n);
        return(Disp(n-1));
    }
}
int main(){
    Disp(5);
    return 0;
} 