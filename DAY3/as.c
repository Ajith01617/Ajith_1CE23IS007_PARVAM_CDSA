// 3 digit number 100<x<999  
#include<stdio.h>

int main(){
    int n=0,s=0,q=0,t = 0;

    printf("\nenter the number to find the sum of digits of: \n");
    scanf("%i",&n);
    q=n;
    while(n>0){
        s += (n%10)*(n%10)*(n%10);
        printf("%d\n",n%10);
        n = n/10;
    }
    printf("sum of the digits= %i",s);
    if(s == q){
        printf("\nit is a armstrong number");
    }
    else{
        printf("\nit is not a armstrong number");
    }
    return 0;
}