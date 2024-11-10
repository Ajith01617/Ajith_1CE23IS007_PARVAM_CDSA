#include<stdio.h>
#include<stdlib.h>
struct box{
    int l;
    int w;
    int h;
};typedef struct box box;

int lt(box b){
    return b.h<41;
}
int vol(box b){
    return b.l*b.w*b.h;
}

int main(){
    int n=0;
    box *s=NULL;
    scanf("%d",&n);
    s=(box*)malloc(n*sizeof(box));
    
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&s[i].l,&s[i].w,&s[i].h);
    }
    for(int i =0;i<n;i++){
        lt(s[i])?printf("%d\n",vol(s[i])):0;
    }
}