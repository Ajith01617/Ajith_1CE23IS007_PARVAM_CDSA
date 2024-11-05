#include<stdio.h>

int main(){
    int n = 5, i = 20;
    printf("\nusing for loop\n");
    for(i=20;i<=500;i++){
        if(i%n==0)
            printf("%d\t",i);
    }
    printf("\nusing while loop\n");
    i = 20;
    while(i<=500){
        if(i%n==0)
            printf("%d\t",i);
            i++;
    }
    printf("\n");
    printf("optimized code\n");
    i = 20;
    while(i<=500){
        printf("%d\t",i);
        i +=5;
    }
    return 0;
}