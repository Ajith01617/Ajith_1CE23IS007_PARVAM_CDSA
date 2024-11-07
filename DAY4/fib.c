#include<stdio.h>

long rec(int n);

int main(){
    int n=0;
    printf("enter a num to get fibo:");
    scanf("%d",&n);
    printf("fibo of n :%ld",rec(n));
}
long rec(int n){
    if(n<=0) return 0;
    if(n==1)return 1;
    return rec(n-1)+rec(n-2);
}