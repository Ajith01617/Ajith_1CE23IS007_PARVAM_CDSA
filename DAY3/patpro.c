#include<stdio.h>

int p1(int n);
int p2(int n);
int p3(int n);

int main(){
    int n =0,i=0;
    printf("\nenter a number for pattern:\n");
    scanf("%d",&n);
    p1(n);
    p2(n);
    p3(n);
    //p4(n);
    }

    
int p1(int n){
    printf("\npatter 1:\n");
    int i=0,j=0;
        for (i=0;i<n;i++){
            for(j = 1;j<=n;j++){
                printf("%d ",j);}
        printf("\n");
    }
}
int p2(int n){
    printf("\npattern 2:\n");
    int i=0;
    while(i<=n){
        for(i=1;i<=n;i++){
            printf("%d ",i);
        }
        i=0;
        n--;
        printf("\n");
        
    }
}
int p3(int n){
    printf("\npattern 3:\n");
    int i=0,j=0,m=1;
    for(j=n;j>0;j--){
        for(i=n;i<0;i--){
            printf("%d ",i);
        }
        printf("\n");
    }
}

