#include<stdio.h>

int main()
{
    int y=0;
    printf("enter the year--\n");
    scanf("%i",&y);
    if((y%4)== 0){
        if((y%4)==0&&(y%100)!=0 ){
            printf("its a leap year");
        }
        else if((y%100)==0&& (y%400)==0){
            printf("it is a leap year");
        }
        
        else{
            printf("its not a leap year");
        }
    }
    else{
            printf("its not a leap year");
        }
}