#include<stdio.h>

int main(){
    int num ,fact = 1;
    printf("Enter no: ");// Take input
    scanf("%d",&num);// store input
    // printf("The fact of  %d",num);
    // 5! = 5*4*3*2*1
    for(int i=num ;i >1 ; i--)
    {
        fact = fact * i;
    }
    printf("The fact of %d is %d ",num,fact);
    return 0;
}