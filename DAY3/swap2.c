#include<stdio.h>

int extv(int n, int m);
int not(int n, int m);
int bwx(int n, int m);

int main(){
    int n = 0, m = 0, t =0;
    printf("enter 2 nos--\n");
    scanf("%i %i",&n,&m);
    not(n,m);
    extv(n,m);
    bwx(n,m);
    return 0;
}


int extv(int n, int m){
    int t=0;
    printf("\nUsing temp variable\nbefore swap\na = %d, b = %d\n",n,m);
    t = n;
    n = m;
    m = t;
    printf("after swap\n");
    printf("a = %d, b = %d",n,m);
}
int not(int n, int m){
    printf("without using temp var\nbefore swap\na = %d, b = %d\n",n,m);
    n = n+m;
    m = n-m;
    n = n-m;
    printf("after swap\n");
    printf("a = %d, b = %d",n,m);
}
int bwx(int n, int m){
printf("\nusing bitwise operator\nbefore swap\na = %d, b = %d\n",n,m);
    n = n^m;
    m = n^m;
    n = n^m;
    printf("after swap\n");
    printf("a = %d, b = %d",n,m);
}
