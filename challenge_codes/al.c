#include<stdio.h>

int main(){
    int n=0,i=0,j=0;
    int y = 'A';
    printf("enter number of alpha\n");
    scanf("%d",&n);
    char s = 'A';
    int k=n;
    for(i=0;i<n;i++){
        s='A';
        
        for(j=0;j<k;j++){
            if(j<n-i){
                printf("%c ",s++);
            }
            else{
                printf(" ");
            }
        }
        j-=2;
        for(;j>=0;j--){
            if(j>n-i){
            printf("%c ",--s);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        
    }
}