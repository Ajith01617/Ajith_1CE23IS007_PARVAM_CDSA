#include<stdio.h>
#include<string.h>

int rc(char *s);
int main(){
    int i=0,j=0;
    char a[100];
    printf("enter a word\n");
    gets(a);
    printf("\%s is %s ",a,rc(a)?"a palindrome":"not a palindrome");
    return 0;
}
int rc(char *s){
    static int i=0;
    int n = strlen(s);
    if(i>=n)return 1;
    if(s[i]!=s[n-1-i])return 0;
    else{
        i++;
        return rc(s);
    }
    }