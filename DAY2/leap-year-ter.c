#include <stdio.h>
int main()
{
    int y=0;
    printf("enter the year--\n");
    scanf("%i",&y);
    printf(("%s", ((y%4)==0 && (y%100)!=0) || (y%100)==0 && (y%400)==0)? 
    "it is a leap year" : "its not a leap year");
    return 0;
}
