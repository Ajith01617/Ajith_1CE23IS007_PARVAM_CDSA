#include<stdio.h>

int main(){
    int n=0,s=0,t=0;
    printf("enter the number to find the sum of digits of: ");
    scanf("%i",&n);
    while(n>0){
        t=n%10;
        s=s+t;
        n = n/10;
    }
    printf("sum of the digits= %i",s);
    return 0;
}
