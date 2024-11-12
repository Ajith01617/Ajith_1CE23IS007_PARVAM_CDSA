#include<stdio.h>

int main(){
    int n=0;
    scanf("%4x",&n);
    if((n>=0)&&(n<=(int)"FFFF")){
        printf("\n%5d     %5o     %5X",n,n,n);
        }
    return 0;
}