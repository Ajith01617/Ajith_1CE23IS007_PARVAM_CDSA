#include<stdio.h>
#include<ctype.h>
int ct(char ch, char r){
    printf("Using ctype header files\n");
        if(isupper(ch)){
            r = tolower(ch);
            printf("%c\n",r);
        }
        else if(islower(ch))
        {
            r = toupper(ch);
            printf("%c\n",r);
        }
        else{
            printf("%c is a invaild input",ch);
        }
        return 0;
    }
int at(char ch, char r){
    printf("Using basic logic\n");
        if(ch>='A' && ch<='Z'){
            r = ch+('a'-'A');
            printf("%c\n",r);
        }
        else if(ch>='a' && ch<='z')
        {
            r = ch-('a'-'A');
            printf("%c\n",r);
        }
        else{
            printf("%c is a invaild input",ch);
        }
        return 0;
    }

int main(){
    char ch;
    char r;
    printf("enter a single character\n");
    scanf("%c",&ch);
    ct(ch,r);
    at(ch,r);
    return 0;
}

