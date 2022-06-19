// C Program to Generate Multiplication Table of a Given Number
#include<stdio.h>

int main(){
    // Take input
    int num;
    printf("Enter No\n");
    scanf("%d",&num);
    printf("The Table of %d is \n",num);
    for (int i= 1; i <10 ; i++)
    {
        printf("%d X %d =%d\n",num,i,i*num);
    }
    return 0;
}