#include<stdio.h>

int main(){
    int n = 17, i = 1;
        print:printf("%dx%d=%d\n",n,i++,n*i);
        if(i<11)goto print;
    return 0;
}