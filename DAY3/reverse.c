#include<stdio.h>

int main(){
    long long int n=0,s=0;
    printf("enter the number to reverse: ");
    scanf("%lld",&n);
  /*  while(n>0){
        s=(s*10)+(n%10);
        n = n/10;
    }*/
    for(n ; n>0 ; n/=10){
        s=(s*10)+(n%10);
    }
    printf("reverse of the digits= %lld",s);
    return 0;
}