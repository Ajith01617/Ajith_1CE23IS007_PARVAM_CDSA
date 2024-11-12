#include<stdio.h>


int main(){
    int n=0,k=0,l=0,m=0,f=0,z=0,g;
    printf("\nenter a number\n");
    scanf("%d",&n);
    printf("\n");
    l=n;
    m=n;
    g=m;
    f=(2*n)-1;
    printf("%d\n\n\n",l);
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++,k++){
            if(i==j)
                {
                    if(l<2){static int g=1;printf("%d  ",g);g++;}
                    else printf("%d  ",l);l--;
                }
            else if((j==(f)-i)&&(j==(n-i)))
                {
                if(l<2){static int g=2;printf("%d  ",g);g++;}
                else printf("%d  ",l-i);l--;
                }
            else if(i==0){
                printf("%d  ",m);
            }
            else if(((i==f-1)&&(j<f)||(j==f-1)&&(i<f))&&(i!=j)){
                printf("%d  ",m);
            }

            else if((i!=0)&&(i!=f-1)&&(i<f-j)){
                if(i>j){
                    if(m-j>1){printf("%d  ",m-j);}
                    if(m-j<=1){static int g=2;printf("%d  ",g);g++;
                    }}
                if(j>i){
                    if(m-i>1){printf("%d  ",m-i);}
                    if(m-i<=1){static int g=2;printf("%d  ",g);g++;
                }
                }

            }
            else if((j!=f-1)&&(j!=0)&&(j<=f-i)){
                static int g =0;
                static int z=1;
                if(j>i){
                    g = m-z;
                    printf("%d  ",g);z++;
                }
                else{
                    static int n = 2;
                    printf("%d  ",n);n++;
                }
            //}
            }
            else if((j!=f-1)&&(j!=0)&&(j>f-i)){
               
                if(j>i){
                    static int z =1;
                    g = m-z;
                    printf("%d  ",g);z++;
                }
                else{
                    
                    printf("%d  ",n);//n;
                }
                    }
            else{
                printf("*  ");
            }
            }
            printf("\n");
        }
        
    }
