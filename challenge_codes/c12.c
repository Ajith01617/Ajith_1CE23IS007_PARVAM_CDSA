#include<stdio.h>


int main(){
    int n=0,k=0,l=0,m=0;
    printf("\nenter a number\n");
    scanf("%d",&n);
    printf("\n");
    l=n;
    m=n;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++,k++){
            if(i<j)printf("%d  ",m-i);
            else if(j>i)printf("%d  ",m-j);
            else if(i==((2*n-1)/2)&&j==((2*n-1)/2))
                {
                    printf("%d  ",1);
                    }
            else if(i==j)
                {
                    if(l<2){static int g=2;printf("%d  ",g);g++;}
                    else printf("%d  ",l);l--;
                }
            else if((j==(2*n-(i)-2)))
                {
                if(l<2){static int g=2;printf("%d  ",g);g++;}
                else printf("%d  ",l+1);l--;
                }
            else if(i==k||j==k){
                printf("%d  ",m);
            }
            else if((j<=2*n-1)&&(i==2*n-1)){
                printf("%d  ",m);
            }
            else if(j==2*n-1){
                printf("%d  ",m);
            }
            else {
                printf("*  ");
            }
            
            }
            printf("\n");
        }
        
    }
