#include<stdio.h>

int main(){
    long long int n=0,s=0,t,q=0;
    printf("enter 2 number to multiply: ");
    scanf("%lld %lld",&n,&s);
    t=n;
    q=s;
    /*
    while(s>1){
        n=n+t;
        s--;
    }
    */
    for(;s>1;n+=t,s--);
    printf("product of %lld and %lld: %lld",t,q,n);
}