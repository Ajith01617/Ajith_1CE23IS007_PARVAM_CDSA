#include<stdio.h>

int main(){
    int n=0,i=-1,j=-1,t=0,k=0;
    long long int a[50][50];
    printf("\nenter a number=");
    scanf("%d",&n);
    t=n;
    printf("\n\n");
    while(t>0){                                               // setting 1/4 of the matrix according to the given input value
        for(i=k;i<n;i++){
            for(j=k;j<n;j++){
                a[i][j]=t;
            }
        }
        t--;
        k++;
    }
    for(i=0;i<2*n-1;i++){                                    //setting the matrix to 2n-1 form to get the req matrix
        for(j=0;j<2*n-1;j++){
            a[i][2*(n-1)-j]=a[i][j];                         //setting the element value to the respective index value
            a[2*(n-1)-i][j]=a[i][j];
        }
    }
    for(i=0;i<2*n-1;i++){                                    //printing
        for(j=0;j<2*n-1;j++){
            printf("%ld  ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}