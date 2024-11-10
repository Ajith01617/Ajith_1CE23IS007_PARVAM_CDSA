#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char s[100];
    int n;
    puts("enter a sentence");
    gets(s);
    //puts(s);
    n = strlen(s);
    if(n>0){
        for(int i =0;i<=n;i++){
            //s[0]=toupper(s[0]);
            if(s[i]== ' '){
                s[i+1]=toupper(s[i+1]);
            }
        }
    }
    puts(s);
    return 0;
    
}