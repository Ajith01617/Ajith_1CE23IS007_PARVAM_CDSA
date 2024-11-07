#include<stdio.h>

int main(){
    int a[10]={7,5,8,9,4,6,4,1,5,4},*p=a;
    for(int i=0;i<10;printf("%d\n",*(p+i++)));
    printf("afterloop--> %d\n",*p);
}