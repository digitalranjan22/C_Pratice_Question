#include<stdio.h>

int main(){
    int n ,sum=0;
    printf("Enter the Natural no of Sum");
    // sum = 1 + 2 + 3 + 4 +... n
    //  Runs in Linear time
    // scanf("%d",&n);
    // for(int i = 1;  i<=n; i++)
    // {
    //     sum += i;
    // }

    // Runs in Constant time
    sum =(n*n +n )/2;
    printf("Sum of first %d natural no is %d",n,sum);
    return 0;
}