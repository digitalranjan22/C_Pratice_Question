// Print Start Pattern


// *
// * *
// * * *
// * * * *

#include<stdio.h>

int main(){
    int n;
    printf("Enter Value : "); //Take input
    scanf("%d",&n); // Store input

    // Run loop this n time 
    for(int i = 0; i< n; i++)
    {
        // printf("* \n");
        // print(i+1) starts 
        for (int j=0; j<i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}