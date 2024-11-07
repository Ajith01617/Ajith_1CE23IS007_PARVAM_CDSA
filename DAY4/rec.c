#include<stdio.h>

long rec(int n);

int main(){
    int n=0;
    printf("enter a num to get fact:");
    scanf("%d",&n);
    printf("fact:%ld",rec(n));
}
long rec(int n){
    if(n<=1) return 1;
    return n*rec(n-1);
}