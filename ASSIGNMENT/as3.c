#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int iv(char s);
int main(){
    int n;
    scanf("%d",&n);
    char **a=NULL;
    a = (char **) malloc(n*(sizeof(char *)));
    for(int i=0;i<n;i++){
        a[i]=(char *)malloc(1000*sizeof(char));
        scanf("%s",a[i]);
    }
    int f=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<strlen(a[i]);j++){
            if((iv(a[i][j])==1)&&(iv(a[i][j+1])==1)&&(iv(a[i][j+2])==1)){
                    printf("HAPPY\n");
                    
                    //exit(0);
                    f=1;
                    //printf("%d",f);
                    break;
                }
            else f=0;
            
                }
            
            if(f==0) printf("Sad\n");
            }
            
            
        }

int iv(char s){
    int k=0;
    k=((s=='a')||(s=='e')||(s=='i')||(s=='o')||(s=='u'))?1:0;
    //printf("%d",k);
    return k;

    /*switch(s){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':return 1;
        default: return 0;
    }*/
}