#include<stdio.h>

int main(){
    int n = 17, i = 1;
    while(i<11){
        printf("%dx%d=%d\n",n,i++,n*i);
        //i++;
    }
    return 0;
}