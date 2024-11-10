#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char s[100];
    int n;
    puts("enter a sentence");
    gets(s);
    //puts(s)strcpy()
    //n = strlen(s);
    if(n>0){
        for(int i =0;s[i]!='\0';i++){
            //s[0]=toupper(s[0]);
            if((s[i]== ' ')||(!isalpha(s[i])))//{strcpy(&s[i],&s[i+1]);}
            {
                for(int j =i;s[j]!='\0';j++)s[j]=s[j+1];
                i=0;
            }
        }
    }
    puts(s);     
    return 0;
    //}
}