#include<stdio.h>
#include<stdlib.h>

int main()
{
    int y,z;
    printf("enter 2 vars\n");
    scanf("%i %i",&y,&z);
    /*printf("%s", ((y%z)==0)? 
    "first variable is divisible by 2nd variable" : "first variable is not divisible by 2nd variable");*/
    if(z != 0){
        ((y%z)==0)? 
        printf("%d is divisible by %d\n",y,z) : printf("%d is not divisible by %d\n",y,z);
        if (y%z ==0){
        printf("%d is divisible by %d\n",y,z);
    }
        else{
        printf("%d is not divisible by %d\n",y,z);
    }
    }
    else{
        printf("divisor cannot be (%d)\n",z);
    }
    return 0;
}