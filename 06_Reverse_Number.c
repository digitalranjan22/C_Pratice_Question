#include<stdio.h>


int reverse(int num){
    int rev = 0, rem;
    while(num != 0);
    { 
        rem = num % 10 ;// Last digt of num
        rev = rev * 10 +  rem ;// generta no form reve as last digit
        num = num/10;
    }
}


int main(){
    int num = 3589;
    int rev = reverse(num);
    printf("the revese number is %d",rev);
    return 0;
}