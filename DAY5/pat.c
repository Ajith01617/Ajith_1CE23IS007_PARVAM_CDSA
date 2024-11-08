#include<stdio.h>


int p1(int n);
int p2(int n);
int p3(int n);


int main(){
    int n =0;
    printf("\nenter the no for pattern\n-------------------\n");scanf("%d",&n);
    printf("-------------------\n");
    p1(n);
    p2(n);
    p3(n);
    return 0;
}
int p1(int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                printf("%d ",j+1);
            }
        printf("\n");
        }
        printf("\n");
        
    return 0;
}
int p2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j+1>=n-i){
                printf("%d ",j+1);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
int p3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=i){
                printf("%d ",j+1);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
