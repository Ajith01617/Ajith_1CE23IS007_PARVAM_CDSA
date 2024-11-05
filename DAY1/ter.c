/*
conditional stmt? if true val : if false val
*/

#include <stdio.h>
int main(){
    int a ,b;
    printf("enter 2 values\n");
    scanf("%d %d",&a,&b);
    a>b? printf("a:(%d) is greater than b:(%d)",a,b):printf("b:(%d) is greater than a:(%d)",b,a);
    
    
    return 0;

}