#include<stdio.h>

int sf(int *n, int *m);

int main(){
    int a,b;
    printf("enter 2 nos--\n");
    scanf("%i %i",&a,&b);
    printf("\nbefore swap\na = %d, b = %d\n",a,b);
    sf(&a,&b);
    printf("\nafter swap\n");
    printf("a = %d, b = %d",a,b);
    return 0;
}
int sf(int *n, int *m){
    *n = *n^*m;
    *m = *n^*m;
    *n = *n^*m;
}

