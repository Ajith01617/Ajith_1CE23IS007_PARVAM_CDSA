#include<stdio.h>

int rec(int n);

int main(){
    int n=0;
    printf("\nEnter the number\n");
    scanf("%d",&n);
    printf("Summation of number: %d",rec(n));
    return 0;
}
int rec(int n){
    if(n<=0)return 0;
    if(n==1)return 1;
    return (n%10)+rec(n/10);
}