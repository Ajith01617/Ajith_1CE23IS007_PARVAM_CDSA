#include<stdio.h>
void mf();                                     //declaration of func;
int main()
{
    printf("Hello World!\n");
    mf();
    printf("Hello World-2!\n");
    mf();
    printf("Hello World-3!\n");
    mf();
    return 0;
}
void mf(){
    int x=5;
    static int y=5; 
    printf("%d\n%d\n",x,y);
    x++;y++;
}