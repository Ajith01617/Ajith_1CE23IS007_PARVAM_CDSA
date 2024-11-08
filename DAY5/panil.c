#include<stdio.h>
#include<string.h>

int rc(char *s);
int main(){
    int i=0,j=0;
    char a[100];
    printf("enter a word\n");
    gets(a);
    if(rc(a)!=0){
        printf("is a palindrome");
    }

    

}
int rc(char *s){
    static int n=0,i=0;
    n = strlen(s);
    if(s[0]!='\0'){
            for(i=0;i<=n-1;i++){
                printf("%d\n%c %c",n,s[i],s[n-i]);
                if(s[i]!=s[n-i])return 0;
                else return 1;
                rc(s);
        }
    }
    }