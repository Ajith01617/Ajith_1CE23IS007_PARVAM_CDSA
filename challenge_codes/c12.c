#include<stdio.h>


int main(){
    int n=0,k=0;
    printf("\nenter a number\n");
    scanf("%d",&n);
    printf("\n");
    for(int i=k;i<2*n-1;i++){
        for(int j=k;j<2*n-1;j++){
            if(i!=((2*n-1)/2)&&j!=((2*n-1)/2))
                printf("%d  ",n);
            if(i==((2*n-1)/2)&&j==((2*n-1)/2))
                printf("%d  ",1);

            }printf("\n");
        }
        
    }
