#include<stdio.h>

int rc(int a,int b);

int main(){
    int a=0,b=0;
    printf("Enter 2 nos:\n");
    scanf("%d %d",&a,&b);
    printf("%d^%d val:= %d",a,b,rc(a,b));
}

int rc(int a,int b){
    if(b<1)return 1;
    if(a==0)return 0;
    return a*rc(a,b-1);
}