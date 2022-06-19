// C Program to Find Prime Number
#include<stdio.h>

int main(){
    int n = 37;
    int isPrime = 1;
    for(int i=2; i*i < n; i++)
    {
        if(n%i == 0){
            isPrime = 0;
        }
    }
    if (isPrime){
        printf("The num  %d is Prime", n);
    }
   
    else{
        printf("The num  %d is not Prime", n);
    }
   
    return 0;
}